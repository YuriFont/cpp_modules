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

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("AAnimal") {
    std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &aanimal) {
    std::cout << "AAnimal copy constructor called." << std::endl;
    this->type = aanimal.type;
}

AAnimal  &AAnimal::operator=(const AAnimal &aanimal) {
    if (this != &aanimal)
        this->type = aanimal.type;
    return *this;
}

AAnimal::~AAnimal(void) {
    std::cout << "AAnimal destructor called." << std::endl;
}

void    AAnimal::makeSound(void) const {
    std::cout << "AAnimal made sound!" << std::endl;
}

std::string AAnimal::getType(void) const {
    return this->type;
}
