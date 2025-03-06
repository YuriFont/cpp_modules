/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:26:55 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 22:26:55 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {
    std::cout << "Dog default constructor called." << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &dog): Animal(dog) {
    std::cout << "Dog copy constructor called." << std::endl;
    type = "Dog";
}

Dog &Dog::operator=(const Dog &dog) {
    if (this != &dog)
        Animal::operator=(dog);
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called." << std::endl;
}

void    Dog::makeSound(void) const {
    std::cout << "Dog barked!" << std::endl;
}
