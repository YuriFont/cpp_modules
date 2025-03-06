/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:38:21 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 22:38:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal() {
    std::cout << "Cat default constructor called." << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &cat): Animal(cat) {
    std::cout << "Cat copy constructor called." << std::endl;
    type = "Cat";
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat)
        Animal::operator=(cat);
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called." << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow! Meow!" << std::endl;
}
