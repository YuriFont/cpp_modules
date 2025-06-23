/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:29:43 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/23 10:38:05 by yufonten         ###   ########.fr       */
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
    if (this != pm) {
        _vec = pm._vec;
        _deq = pm._deq;
        _vecTime = pm._vecTime;
        _deqTime = pm._deqTime;
    }
    return *this;
}


