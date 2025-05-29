/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:07:11 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/28 20:28:24 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int lenght = 5;
    std::cout << "Test 1: Array of integers whith addOne:" << std::endl;
    iter(array, lenght, addOne);
    iter(array, lenght, print);

    int array2[] = {5, 6, 7, 8, 9};
    std::cout << "Test 2: Array of integers whith removeOne:" << std::endl;
    iter(array2, lenght, removeOne);
    iter(array2, lenght, print);

    return 0;
}
