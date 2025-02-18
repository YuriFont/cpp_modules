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
    this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed::Fixed(const int value) {
    this->_rawBits = value * (1 << _fractionalBits);
}

Fixed::Fixed(const float value) {
    this->_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed  &Fixed::operator=(const Fixed &fixed) {
    if (this != &fixed)
        this->_rawBits = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {}

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

bool    Fixed::operator>(const Fixed &fixed) const {
    return this->toFloat() > fixed.toFloat();
}

bool    Fixed::operator<(const Fixed &fixed) const {
    return this->toFloat() < fixed.toFloat();
}

bool    Fixed::operator>=(const Fixed &fixed) const {
    return this->toFloat() >= fixed.toFloat();
}

bool    Fixed::operator<=(const Fixed &fixed) const {
    return this->toFloat() <= fixed.toFloat();
}

bool    Fixed::operator==(const Fixed &fixed) const {
    return this->toFloat() == fixed.toFloat();
}

bool    Fixed::operator!=(const Fixed &fixed) const {
    return this->toFloat() != fixed.toFloat();
}

float   Fixed::operator+(const Fixed &fixed) const {
    return this->toFloat() + fixed.toFloat();
}

float   Fixed::operator-(const Fixed &fixed) const {
    return this->toFloat() - fixed.toFloat();
}

float   Fixed::operator*(const Fixed &fixed) const {
    return this->toFloat() * fixed.toFloat();
}

float   Fixed::operator/(const Fixed &fixed) const {
    return this->toFloat() / fixed.toFloat();
}

Fixed   &Fixed::operator++(void) {
    this->_rawBits++;
    return *this;
}

Fixed   Fixed::operator++(int) {
    Fixed temp = *this;
    this->_rawBits++;
    return temp;
}

Fixed   &Fixed::operator--(void) {
    this->_rawBits--;
    return *this;
}

Fixed   Fixed::operator--(int) {
    Fixed temp = *this;
    this->_rawBits--;
    return temp;
}

Fixed    &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed    &Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

Fixed    &Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed    &Fixed::max(const Fixed &a, const Fixed &b) {
    return a > b ? a : b;
}
