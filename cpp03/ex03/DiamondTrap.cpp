/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:25:19 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/04 17:25:19 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Nameless_clap_name"), FragTrap(), ScavTrap() {
    this->_name = "Nameless";
    _hitPoints = FragTrap_hitPoints;
    _energyPoints = ScavTrap_energyPoints;
    _attackDamage = FragTrap_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " default constructor was called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
    this->_name = name;
    _hitPoints = FragTrap_hitPoints;
    _energyPoints = ScavTrap_energyPoints;
    _attackDamage = FragTrap_attackDamage;
    std::cout << "DiamondTrap " << this->_name << " constructor with name was called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap): ClapTrap(diamondtrap), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap " << this->_name << " copy constructor was called." << std::endl;
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
    if (this != &diamondtrap) {
        ClapTrap::operator=(diamondtrap);
        this->_name = diamondtrap._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap " << this->_name << " destructor was called." << std::endl;
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is "<< ClapTrap::_name << "." << std::endl;
}
