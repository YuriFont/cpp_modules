/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:05:48 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 01:05:48 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal") {
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Animal copy constructor called." << std::endl;
    this->type = animal.type;
}

Animal  &Animal::operator=(const Animal &animal) {
    if (this != &animal)
        this->type = animal.type;
    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called." << std::endl;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal made sound!" << std::endl;
}

std::string Animal::getType(void) const {
    return this->type;
}
