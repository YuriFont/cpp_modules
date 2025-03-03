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

ClapTrap::ClapTrap(void): _name("Nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << this->_name <<   " default constructor was called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << this->_name << " constructor with name was called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
    std::cout << "ClapTrap " << this->_name << " copy constructor was called." << std::endl;
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
    std::cout << "ClapTrap " << this->_name << " destructor was called." << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    std::cout << "Claptrap " << this->_name;
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout << " don't have energy points or has already been defeated!!!" << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!!!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "Claptrap " << this->_name;
    if (this->_hitPoints <= 0) {
        std::cout << " is already dead!!!" << std::endl;
        return ;
    }
    this->_hitPoints = (amount >= this->_hitPoints) ? 0 : (this->_hitPoints - amount);
    std::cout << " took " << amount << " points of damage!!!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "Claptrap " << this->_name;
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout << " don't have energy points or has already been defeated!!!" << std::endl;
        return ;
    }
    this->_energyPoints--;
    this->_hitPoints += amount;
    std::cout << " repairs itself, it has recovered " << amount << " hit points!!!" << std::endl;
}
