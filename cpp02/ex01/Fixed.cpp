/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:39:34 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/06 11:39:34 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed  &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &fixed)
        this->_rawBits = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_rawBits;
}

void    Fixed::setRawBits(int const raw) {
    this->_rawBits = raw;
}

float   Fixed::toFloat(void) const {
    return static_cast<float>(this->_rawBits) / (1 << _fractionalBits);
}

int     Fixed::toInt(void) const {
    return this->_rawBits >> this->_fractionalBits;
}

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
