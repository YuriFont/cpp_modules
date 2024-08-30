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

PhoneBook::~PhoneBook() {}

int			PhoneBook::getNumContacts(void) {
	return this->numContacts;
}

Contact*	PhoneBook::getContactByIndex(int index) {
	if ((index > -1 && index < 8) && index <= this->numContacts)
		return &this->contacts[index];
	return NULL;
}

void		PhoneBook::add(void) {
	std::string	fn;
	std::string	ln;
	std::string	nc;
	std::string	pn;
	std::string	ds;
	int			index;

	std::cout << "First name: ";
	std::cin >> fn;
	std::cout << "Last name: ";
	std::cin >> ln;
	std::cout << "Nickname: ";
	std::cin >> nc;
	std::cout << "Phone number: ";
	std::cin >> pn;
	std::cout << "Darkest secret: ";
	std::cin >> ds;

	if (fn.empty() || ln.empty() || nc.empty() || pn.empty() || ds.empty())
		return ;
	index = 0;
	if (this->numContacts > -1 && this->numContacts < 8)	
		index = this->numContacts;
	this->contacts[index].setFirstName(fn);
	this->contacts[index].setLastName(ln);
	this->contacts[index].setNickname(nc);
	this->contacts[index].setPhoneNumber(pn);
	this->contacts[index].setDarkestSecret(ds);
	this->numContacts++;
}
