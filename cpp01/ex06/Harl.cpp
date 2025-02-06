/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:24:38 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/05 11:24:38 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug(void) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
	this->info();
}

void    Harl::info(void) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl;
	this->warning();
}

void	Harl::warning(void) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	this->error();
}

void	Harl::error(void) {
	std::cout << "[ERROR]\nThis is unacceptable!\nI want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int			n = -1;

	while (++n < 4) {
		if (level == levels[n])
			break;
	}

	switch (n) {

        case 0:
            this->debug();
			break;

        case 1:
            this->info();
			break;

        case 2:
            this->warning();
			break;

        case 3:
            this->error();
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
