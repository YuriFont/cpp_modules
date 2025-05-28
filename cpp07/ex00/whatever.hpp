/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:51:56 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/28 11:08:37 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void    swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T   min(T a, T b) {
    if (a == b)
        return b;
    return a < b ? a : b;
}

template <typename T>
T   max(T a, T b) {
    if (a == b)
        return b;
    return a > b ? a : b;
}

#endif
