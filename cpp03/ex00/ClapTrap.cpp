/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:12:58 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/18 22:12:58 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "Default constructor was called" << std::endl;
    this->_name = void;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor with name was called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
    std::cout << "Copy constructor was called" << std::endl;
    this->_name = claptrap._name;
    this->_hitPoints = claptrap._hitPoints;
    this->_energyPoints = claptrap._energyPoints;
    this->_attackDamage = claptrap._attackDamage;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &claptrap) {
    if (this != &claptrap) {
        this->_name = claptrap._name;
        this->_hitPoints = claptrap._hitPoints;
        this->_energyPoints = claptrap._energyPoints;
        this->_attackDamage = claptrap._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor was called" << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    std::cout << "Claptrap " << this->_name;
    if (this->_energyPoints == 0)
        std::cout << " don't have energy points!!!" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << " is dead!!!" << std::endl;
    else {
        std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!!!" << std::endl;
        this->_energyPoints--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "Claptrap " << this->_name;
    if (this->_hitPoints <= 0)
        std::cout << " is already dead!!!" << std::endl;
    else {
        std::cout << " took " << amount << " points of damage!!!" << std::endl;
        this->_hitPoints -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "Claptrap " << this->_name;
    if (this->_energyPoints == 0)
        std::cout << " don't have energy points!!!" << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << " is dead!!!" << std::endl;
    else {
        std::cout << " repairs itself, it has recovered " << amount << " hit points!!!" << std::endl;
        this->_energyPoints--;
    }
}
