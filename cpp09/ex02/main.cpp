/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:49:11 by yufonten          #+#    #+#             */
/*   Updated: 2025/07/12 15:13:54 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac == 1) {
        std::cerr << "Error: PmergeMe program needs numbers to sort.\n";
        return 1;
    }
    
    PmergeMe pm;
    if (!pm.parseInput(ac, (const char **)av))
        return 1;
    
    pm.sort();
    pm.displayResults();

    return 0;
}
