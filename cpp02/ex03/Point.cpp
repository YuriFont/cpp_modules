/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:59:10 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/12 23:59:10 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) { }

Point::Point(const float x, const float y): _x(x), _y(y) { }

Point::Point(const Point &point): _x(point._x), _y(point._y) { }

Point   &Point::operator=(const Point &point) {
    (void)point;
    return *this;
}

Point::~Point(void) { }

float   Point::getX(void) const {
    return this->_x.toFloat();
}

float   Point::getY(void) const {
    return this->_y.toFloat();
}

bool    Point::operator==(const Point &point) const {
    return ((this->getX() == point.getX()) && (this->getY() == point.getY()));
}
