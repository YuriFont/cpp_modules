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
	std::string	num;
	std::string	name;

	std::cout << "Enter with number of zombies have in the horde: ";
	std::getline(std::cin, num);
	std::cout << "Now enter with the name of zombies: ";
	std::getline(std::cin, name);

	int N = num[0] - '0';
	horde = zombieHorde(N, name);

	if (horde) {
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete[] horde;
	}

	return 0;
}