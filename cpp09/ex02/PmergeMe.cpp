/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:29:43 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/24 19:56:55 by yufonten         ###   ########.fr       */
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

bool    PmergeMe::_isPositiveInteger(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

int PmergeMe::parseInput(const int ac, const char **av) {
    for (int i = 1; i < ac; i++) {
        if (!_isPositiveInteger(av[i])) {
            std::cerr << "Error: PmergeMe program accepts only positive integers\n";
            return 1;
        }
        int n = std::atoi(av[i]);
        _vec.push_back(n);
        _deq.push_back(n);
    }
    return 0;
}

template <class T>
void mergeInsertSortVector(const <int>& vec) {
    if (vec.size() <= 1) return;

    std::vector<int> mainChain, pend;
    for (size_t i = 0; i < vec.size(); i += 2) {
        if (i + 1 < vec.size()) {
            if (vec[i] > vec[i + 1]) {
                mainChain.push_back(vec[i + 1]);
                pend.push_back(vec[i]);
            } else {
                mainChain.push_back(vec[i]);
                pend.push_back(vec[i + 1]);
            }
        } else {
            pend.push_back(vec[i]);
        }
    }

    mergeInsertSortVector(mainChain);

    for (size_t i = 0; i < pend.size(); ++i) {
        std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), pend[i]);
        mainChain.insert(it, pend[i]);
    }

    vec = mainChain;
}

int PmergeMe::sort(void) {
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << (i < _vec.size() - 1 ? " " : "\n");

    clock_t start = clock();
    //mergeInsertSortVector(vec);
    clock_t end = clock();
    _vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

    start = clock();
    //mergeInsertSortVector(vec);
    end = clock();
    _deqTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
    
    std::cout << "After: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << (i < _vec.size() - 1 ? " " : "\n");

    return 0;
}
