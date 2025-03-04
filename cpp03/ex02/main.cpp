/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:26:47 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/18 19:26:47 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap a;
    std::cout << std::endl;
    FragTrap b("Androide 17");
    std::cout << std::endl;
    a.attack("Androide 17");
    std::cout << std::endl;
    b.attack("Nameless");
    std::cout << std::endl;
    a.beRepaired(10);
    std::cout << std::endl;
    b.takeDamage(10);
    std::cout << std::endl;
    b.attack("Nameless");
    std::cout << std::endl;
    a.attack("Androide 17");
    std::cout << std::endl;
    b.highFivesGuys();
    std::cout << std::endl;
    return 0;
}
