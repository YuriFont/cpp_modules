/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:34:50 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/05 19:34:50 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl harl;

    if (ac != 2) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }

    harl.complain(av[1]);

	return 0;
}
