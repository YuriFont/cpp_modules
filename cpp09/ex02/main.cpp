/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:00:00 by yufonten          #+#    #+#             */
/*   Updated: 2026/01/05 14:18:27 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
    if (ac < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    
    PmergeMe pmerge;
    if (!pmerge.parseInput(ac, av)) {
        return 1;
    }
    
    pmerge.sort();
    pmerge.display();
    
    return 0;
}
