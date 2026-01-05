/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:00:00 by yufonten          #+#    #+#             */
/*   Updated: 2026/01/05 14:18:12 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _vecTime(0), _deqTime(0) {}

PmergeMe::PmergeMe(const PmergeMe& pm) {
    *this = pm;
}

PmergeMe::~PmergeMe(void) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& pm) {
    if (this != &pm) {
        _vec = pm._vec;
        _deq = pm._deq;
        _vecTime = pm._vecTime;
        _deqTime = pm._deqTime;
    }
    return *this;
}

bool PmergeMe::_isValidNumber(const std::string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isdigit(static_cast<unsigned char>(str[i]))) 
            return false;
    }
    long num = atol(str.c_str());
    return num > 0 && num <= INT_MAX;
}

bool PmergeMe::parseInput(int ac, char** av) {
    for (int i = 1; i < ac; ++i) {
        std::string arg(av[i]);
        if (!_isValidNumber(arg)) {
            std::cerr << "Error" << std::endl;
            return false;
        }
        int n = atoi(av[i]);
        _vec.push_back(n);
        _deq.push_back(n);
    }
    return true;
}

void PmergeMe::_pairAndSwapVector() {
    for (size_t i = 0; i + 1 < _vec.size(); i += 2) {
        if (_vec[i] > _vec[i + 1]) {
            std::swap(_vec[i], _vec[i + 1]);
        }
    }
}

void PmergeMe::_recursiveSortBigsVector(size_t start, size_t end) {
    if (end - start <= 1) return;
    
    size_t mid = start + (end - start) / 2;
    _recursiveSortBigsVector(start, mid);
    _recursiveSortBigsVector(mid, end);
    
    std::vector<int> temp(end - start);
    size_t i = start, j = mid, k = 0;
    
    while (i < mid && j < end) {
        if (_vec[i] <= _vec[j]) {
            temp[k++] = _vec[i++];
        } else {
            temp[k++] = _vec[j++];
        }
    }
    while (i < mid) temp[k++] = _vec[i++];
    while (j < end) temp[k++] = _vec[j++];
    
    for (k = 0; k < temp.size(); ++k) {
        _vec[start + k] = temp[k];
    }
}

void PmergeMe::_binaryInsertSmallsVector() {
    std::vector<int> result;
    size_t n = _vec.size();
    
    for (size_t i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            std::vector<int>::iterator it = 
                std::lower_bound(result.begin(), result.end(), _vec[i + 1]);
            result.insert(it, _vec[i + 1]);
        }

        std::vector<int>::iterator it = 
            std::lower_bound(result.begin(), result.end(), _vec[i]);
        result.insert(it, _vec[i]);
    }
    _vec = result;
}

void PmergeMe::_pairAndSwapDeque() {
    for (size_t i = 0; i + 1 < _deq.size(); i += 2) {
        if (_deq[i] > _deq[i + 1]) {
            std::swap(_deq[i], _deq[i + 1]);
        }
    }
}

void PmergeMe::_recursiveSortBigsDeque(size_t start, size_t end) {
    if (end - start <= 1) return;
    
    size_t mid = start + (end - start) / 2;
    _recursiveSortBigsDeque(start, mid);
    _recursiveSortBigsDeque(mid, end);
    
    std::deque<int> temp;
    size_t i = start, j = mid;
    
    while (i < mid && j < end) {
        if (_deq[i] <= _deq[j]) {
            temp.push_back(_deq[i++]);
        } else {
            temp.push_back(_deq[j++]);
        }
    }
    while (i < mid) temp.push_back(_deq[i++]);
    while (j < end) temp.push_back(_deq[j++]);
    
    std::deque<int>::iterator it = _deq.begin() + start;
    for (std::deque<int>::iterator temp_it = temp.begin(); 
         temp_it != temp.end(); ++temp_it, ++it) {
        *it = *temp_it;
    }
}

void PmergeMe::_binaryInsertSmallsDeque() {
    std::deque<int> result;
    size_t n = _deq.size();
    
    for (size_t i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            std::deque<int>::iterator it = 
                std::lower_bound(result.begin(), result.end(), _deq[i + 1]);
            result.insert(it, _deq[i + 1]);
        }
        
        std::deque<int>::iterator it = std::lower_bound(result.begin(), result.end(), _deq[i]);
        result.insert(it, _deq[i]);
    }
    _deq = result;
}

void PmergeMe::sort(void) {
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); ++i) {
        std::cout << _vec[i];
        if (i < _vec.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    
    clock_t start = clock();
    _pairAndSwapVector();
    _recursiveSortBigsVector(0, _vec.size());
    _binaryInsertSmallsVector();
    clock_t end = clock();
    _vecTime = (double)(end - start) * 1000000.0 / CLOCKS_PER_SEC;
    
    start = clock();
    _pairAndSwapDeque();
    _recursiveSortBigsDeque(0, _deq.size());
    _binaryInsertSmallsDeque();
    end = clock();
    _deqTime = (double)(end - start) * 1000000.0 / CLOCKS_PER_SEC;
}

void PmergeMe::display(void) {
    std::cout << "After: ";
    for (size_t i = 0; i < _deq.size(); ++i) {
        std::cout << _deq[i];
        if (i < _deq.size() - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << _vec.size() << " elements with std::[vector]:   " << _vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::[deque]:   " << _deqTime << " us" << std::endl;
}
