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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void) {

    ScavTrap a;
    ScavTrap b("Androide 17");

    a.attack("Androide 17");
    b.attack("Nameless");

    a.beRepaired(10);
    b.takeDamage(10);

    b.attack("Nameless");

    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");
    a.attack("Androide 17");

    return 0;
}
