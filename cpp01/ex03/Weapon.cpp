/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:25:25 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/07 23:25:25 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon(void) {
    std::cout << this->type << " was destroyed!!!" << std::endl;
}

const std::string&   Weapon::getType(void) {
    return this->type;
}

void                Weapon::setType(const std::string& type) {
    this->type = type;
}
