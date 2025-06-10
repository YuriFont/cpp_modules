/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:05:33 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/10 11:33:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    (void)av;
    try {
        BitcoinExchange exchange;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
