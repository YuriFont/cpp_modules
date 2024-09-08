/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:21:53 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/08 00:21:53 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB(void) {
	std::cout << this->name << " died!!!" << std::endl;
}

void		HumanB::attack(void) {
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " is unarmed!!!" << std::endl;
}

void        HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}
