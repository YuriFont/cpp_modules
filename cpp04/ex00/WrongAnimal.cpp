/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:47:21 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 12:47:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    this->type = wrongAnimal.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
    if (this != &wrongAnimal)
        this->type = wrongAnimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called." << std::endl;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal made a wrong sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}
