/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:38:19 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/12 23:38:19 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__
#include "Fixed.hpp"

class Point {

    private:

        Fixed const _x;
        Fixed const _y;

    public:

        Point(void);
        Point(const float x, const float y);
        Point(const Point &point);
        Point   &operator=(const Point &point);
        ~Point(void);
        float   getX(void) const;
        float   getY(void) const;
        bool    operator==(const Point &point) const;

};

#endif