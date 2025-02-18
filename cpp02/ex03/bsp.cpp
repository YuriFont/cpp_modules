/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:59:31 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/13 00:59:31 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   side_edge(Point const a, Point const b, Point const p) {
    return ((b.getX() - a.getX()) * (p.getY() - a.getY()) - (p.getX() - a.getX()) * (b.getY() - a.getY()));
}

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    float edge_a;
    float edge_b;
    float edge_c;

    if ((a == b) || (b == c) || (a == c))
        return false;
    if ((point == a) || (point == b) || (point == c))
        return false;

    edge_a = side_edge(a, b, point);
    edge_b = side_edge(b, c, point);
    edge_c = side_edge(c, a, point);

    if ((edge_a > 0 && edge_b > 0 && edge_c > 0) || (edge_a < 0 && edge_b < 0 && edge_c < 0))
        return true;
    return false;
}
