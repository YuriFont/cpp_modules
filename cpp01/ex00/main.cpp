/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:15:13 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/04 22:15:13 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie  z("yuri");
    z.announce();

    Zombie* zPtr = newZombie("Erick");
    zPtr->announce();

    randomChump("Thaís");
    
    delete zPtr;
}
