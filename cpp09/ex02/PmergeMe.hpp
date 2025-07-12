/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:53:24 by yufonten          #+#    #+#             */
/*   Updated: 2025/07/12 15:27:16 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iomanip>

class PmergeMe {
  
    private:

        std::vector<int> _vec;
        std::deque<int> _deq;
        double _vecTime;
        double _deqTime;
        bool    _isValidNumber(const char *str);
        template <typename Container>
        void    insertionSort(Container& arr, int left, int right);
        template <typename Container>
        void    merge(Container& arr, int left, int mid, int right);
        void    mergeInsertSortVector(std::vector<int>& arr, int left, int right, int threshold);
        void    mergeInsertSortDeque(std::deque<int>& arr, int left, int right, int threshold);

    public:

        PmergeMe(void);
        PmergeMe(const PmergeMe &pm);
        ~PmergeMe(void);
        PmergeMe    &operator=(const PmergeMe &pm);
        bool    parseInput(const int ac, const char **av);
        void    sort(void);
        void    displayResults(void);

};

#endif
