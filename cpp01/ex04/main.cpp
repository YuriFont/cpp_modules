/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:19:53 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/08 17:19:53 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ReplaceInFile.hpp"

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "The program only works with three arguments!!!";
		return 1;
	}

	ReplaceInFile rp(av[1], av[2], av[3]);

	rp.makeReplacement();

	return 0;
}
