/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:15:55 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/14 15:15:59 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Error\n";
        return 1;
    }
    RPN rpn;
    rpn.calculate(av[1]);
    return 0;
}
