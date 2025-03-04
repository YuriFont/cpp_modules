/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:20:32 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/03 18:20:32 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    std::cout << "FragTrap " << _name <<   " default constructor was called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
    std::cout << "FragTrap " << _name <<   " constructor with name was called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap) {
    std::cout << "FragTrap " << this->_name << " copy constructor was called." << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &fragtrap) {
    if (this != &fragtrap)
        ClapTrap::operator=(fragtrap);
    return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << _name << " destructor was called." << std::endl;
}

void    FragTrap::attack(const std::string& target) {
    std::cout << "Fragtrap " << _name;
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << " don't have energy points or has already been defeated!!!" << std::endl;
        return ;
    }
    _energyPoints--;
    std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!!!" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << ": give me a high five! 🖐️" << std::endl;
}
