/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:19:36 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/28 22:19:36 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::addContact(void) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "First name: ";
	std::cin >> firstName;
	std::cout << std::endl;
	std::cout << "Last name: ";
	std::cin >> lastName;
	std::cout << std::endl;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << std::endl;
	std::cout << "Phone number: ";
	std::cin >> phoneNumber;
	std::cout << std::endl;
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
	std::cout << std::endl;

	this->phoneBookList.add(Contact::Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
}
