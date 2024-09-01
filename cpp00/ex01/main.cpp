/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:19:06 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/28 20:19:06 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook 	pb;
	std::string	input;

	while (1) {
		std::cout << std::endl << "What action do you want to perform in the phone book? (Ex: ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);

		if (input == "ADD")
			pb.add();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << std::endl << "This is a invalid action!!!" << std::endl;
	}
	return 0;
}
