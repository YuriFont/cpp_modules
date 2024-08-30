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

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

int	PhoneBook::getNumContacts(void) {
	return numContacts;
}

const Contact&	PhoneBook::getContactByIndex(int index) {
	if (index > -1 && index < MAX_CONTACTS)
		return contacts[index];
	else
		throw std::out_of_range("Index out of range");
}

const Contact&	PhoneBook::creatContact(void) {
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
    std::cout << "Nickname: ";
    std::cin >> nickname;
    std::cout << "Phone Number: ";
    std::cin >> phoneNumber;
    std::cout << "Darkest Secret: ";
    std::cin >> darkestSecret;

	Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	Contact& refContact = newContact;
	return refContact;
}

void		PhoneBook::addContact(const Contact& newContact) {
	if (numContacts < MAX_CONTACTS) {
		contacts[numContacts++] = newContact;
	} else {
		contacts[0] = newContact;
	}
}
