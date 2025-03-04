/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:47:46 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/20 09:47:46 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
    std::cout << "ScavTrap " << _name <<   " default constructor was called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
    std::cout << "ScavTrap " << _name <<   " constructor with name was called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap) {
    std::cout << "ClapTrap " << this->_name << " copy constructor was called." << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &scavtrap) {
    if (this != &scavtrap)
        ClapTrap::operator=(scavtrap);
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << _name << " destructor was called." << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    std::cout << "Scavtrap " << _name;
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << " don't have energy points or has already been defeated!!!" << std::endl;
        return ;
    }
    _energyPoints--;
    std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!!!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}
