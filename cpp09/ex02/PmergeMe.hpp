/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:53:24 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/23 10:33:16 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {
  
    private:

        std::vector<int> _vec;
        std::deque<int> _deq;
        double _vecTime;
        double _deqTime;

    public:

        PmergeMe(void);
        PmergeMe(const PmergeMe &pm);
        ~PmergeMe(void);
        PmergeMe    &operator=(const PmergeMe &pm);
        

};

#endif
