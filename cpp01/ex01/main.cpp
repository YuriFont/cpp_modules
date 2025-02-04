/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:39:17 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/07 21:39:17 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void) {
	Zombie*		horde;
	int N = 4;

	horde = zombieHorde(N, "Horde");

	if (horde) {
		for (int i = 0; i < N; i++) {
			horde[i].announce();
		}
		std::cout << std::endl;
		delete[] horde;
	}

	return 0;
}