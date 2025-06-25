/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:49:11 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/24 10:22:13 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac == 1) {
        std::cerr << "Error: PmergeMe program needs numbers to sort.\n";
        return 1;
    }
    
    PmergeMe pm;
    if (pm.parseInput(ac, (const char **)av) || pm.sort())
        return 1;

    return 0;
}
