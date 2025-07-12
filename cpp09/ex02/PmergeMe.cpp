/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:29:43 by yufonten          #+#    #+#             */
/*   Updated: 2025/07/12 15:30:02 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void): _vecTime(0), _deqTime(0) {}

PmergeMe::PmergeMe(const PmergeMe &pm) {
    if (this != &pm) {
        _vec = pm._vec;
        _deq = pm._deq;
        _vecTime = pm._vecTime;
        _deqTime = pm._deqTime;
    }
}

PmergeMe::~PmergeMe(void) {}

PmergeMe    &PmergeMe::operator=(const PmergeMe &pm) {
    if (this != &pm) {
        _vec = pm._vec;
        _deq = pm._deq;
        _vecTime = pm._vecTime;
        _deqTime = pm._deqTime;
    }
    return *this;
}

bool    PmergeMe::_isValidNumber(const char *str) {
    for (size_t i = 0; str[i]; ++i) {
        if (!isdigit(str[i]))
            return false;
    }
    long num = atol(str);
    return num > 0 && num <= 2147483647;
}

bool    PmergeMe::parseInput(const int ac, const char **av) {
    for (int i = 1; i < ac; i++) {
        if (!_isValidNumber(av[i])) {
            std::cerr << "Error\n";
            return false;
        }
        int n = std::atoi(av[i]);
        _vec.push_back(n);
        _deq.push_back(n);
    }
    return true;
}

template <typename Container>
void    PmergeMe::insertionSort(Container &arr, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

template <typename Container>
void    PmergeMe::merge(Container &arr, int left, int mid, int right) {
    Container leftArr;
    Container rightArr;
    for (int i = left; i <= mid; ++i) leftArr.push_back(arr[i]);
    for (int i = mid + 1; i <= right; ++i) rightArr.push_back(arr[i]);

    int i = 0, j = 0, k = left;
    while (i < static_cast<int>(leftArr.size()) && j < static_cast<int>(rightArr.size())) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    while (i < static_cast<int>(leftArr.size())) arr[k++] = leftArr[i++];
    while (j < static_cast<int>(rightArr.size())) arr[k++] = rightArr[j++];
}

void    PmergeMe::mergeInsertSortVector(std::vector<int> &arr, int left, int right, int threshold) {
    if (right - left + 1 <= threshold) {
        insertionSort(arr, left, right);
        return;
    }
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeInsertSortVector(arr, left, mid, threshold);
        mergeInsertSortVector(arr, mid + 1, right, threshold);
        merge(arr, left, mid, right);
    }
}

void    PmergeMe::mergeInsertSortDeque(std::deque<int> &arr, int left, int right, int threshold) {
    if (right - left + 1 <= threshold) {
        insertionSort(arr, left, right);
        return;
    }
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeInsertSortDeque(arr, left, mid, threshold);
        mergeInsertSortDeque(arr, mid + 1, right, threshold);
        merge(arr, left, mid, right);
    }
}

void    PmergeMe::sort(void) {
    clock_t start, end;

    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size() && i < 5; ++i) {
        std::cout << _vec[i] << " ";
    }
    if (_vec.size() > 5) std::cout << "[...]";
    std::cout << std::endl;
    
    start = clock();
    mergeInsertSortVector(_vec, 0, _vec.size() - 1, 10);
    end = clock();
    _vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    start = clock();
    mergeInsertSortDeque(_deq, 0, _deq.size() - 1, 10);
    end = clock();
    _deqTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::displayResults(void) {
    std::cout << "After: ";
    for (size_t i = 0; i < _deq.size() && i < 5; ++i) {
        std::cout << _deq[i] << " ";
    }
    if (_deq.size() > 5) std::cout << "[...]";
    std::cout << std::endl;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << _vecTime << " us\n";
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << _deqTime << " us\n";
}
