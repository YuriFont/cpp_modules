/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:05:02 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 13:05:02 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {
    std::cout << "WrongCat default constructor called." << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat) {
    std::cout << "WrongCat copy constructor called." << std::endl;
    this->type = wrongCat.type;
}

WrongCat    &WrongCat::operator=(const WrongCat &wrongCat) {
    if (this != &wrongCat)
        WrongAnimal::operator=(wrongCat);
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called." << std::endl;
}

void    WrongCat::makeSound(void) const {
    std::cout << "WrongMeow! WrongMeow!" << std::endl;
}
