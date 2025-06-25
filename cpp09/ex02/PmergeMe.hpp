/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:53:24 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/24 19:31:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>

class PmergeMe {
  
    private:

        std::vector<int> _vec;
        std::deque<int> _deq;
        double _vecTime;
        double _deqTime;
        bool    _isPositiveInteger(const char *str);

    public:

        PmergeMe(void);
        PmergeMe(const PmergeMe &pm);
        ~PmergeMe(void);
        PmergeMe    &operator=(const PmergeMe &pm);
        int parseInput(const int ac, const char **av);
        int sort(void);

};

#endif
