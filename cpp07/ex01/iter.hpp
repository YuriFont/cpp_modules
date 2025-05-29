/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:37:34 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/28 20:27:48 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *array, int lenght, void (*function)(T&)) {
    if (lenght <= 0)
        return ;
    for (int i = 0; i < lenght; i++)
        function(array[i]);
}

void    addOne(int &n) {
    n++;
}

void    removeOne(int &n) {
    n--;
}

template <typename T>
void    print(T &value) {
    std::cout << value << std::endl;
}

#endif
