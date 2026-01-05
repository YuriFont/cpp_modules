/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:00:00 by yufonten          #+#    #+#             */
/*   Updated: 2026/01/05 14:18:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <stdexcept>
#include <climits>
#include <string>

class PmergeMe {
    private:
        std::vector<int>    _vec;
        std::deque<int>     _deq;
        double              _vecTime;
        double              _deqTime;

        bool    _isValidNumber(const std::string& str);
        void    _pairAndSwapVector();
        void    _recursiveSortBigsVector(size_t start, size_t end);
        void    _binaryInsertSmallsVector();
        void    _pairAndSwapDeque();
        void    _recursiveSortBigsDeque(size_t start, size_t end);
        void    _binaryInsertSmallsDeque();

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& other);
        
        bool    parseInput(int ac, char** av);
        void    sort();
        void    display();
};

#endif
