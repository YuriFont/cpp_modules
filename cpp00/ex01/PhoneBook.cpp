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
#include <sstream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

PhoneBook::~PhoneBook() {}

int			PhoneBook::getNumContacts(void) {
	return this->numContacts;
}

Contact*	PhoneBook::getContactByIndex(int index) {
	if ((index > -1 && index < 8) && index < this->numContacts)
		return &this->contacts[index];
	return NULL;
}

void		PhoneBook::add(void) {
	std::string	fn, ln, nc, pn, ds;
	int			index;

	std::cout << std::endl << "First name: ";
	std::getline(std::cin, fn);
	std::cout << "Last name: ";
	std::getline(std::cin, ln);
	std::cout << "Nickname: ";
	std::getline(std::cin, nc);
	std::cout << "Phone number: ";
	std::getline(std::cin, pn);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, ds);
	std::cout << std::endl;

	if (fn.empty() || ln.empty() || nc.empty() || pn.empty() || ds.empty()) {
		std::cout << std::endl << "Please, you need to fill in all the fields to add a contact!!!" << std::endl;
		return ;
	}

	index = 0;
	if (this->numContacts > -1 && this->numContacts < 8)	
		index = this->numContacts;
	this->contacts[index].setFirstName(fn);
	this->contacts[index].setLastName(ln);
	this->contacts[index].setNickname(nc);
	this->contacts[index].setPhoneNumber(pn);
	this->contacts[index].setDarkestSecret(ds);
	this->numContacts++;
	std::cout << "Contact added successfully!!!" << std::endl << std::endl;
}

void		PhoneBook::addWord(std::string word) {
	int	size;

	std::cout << "|"; 
	if (word.size() > 10) {
		word.resize(9);
		std::cout << word << ".";
		return ;
	}
	size = 10 - word.size();
	while (size > 0) {
		std::cout << " ";
		size--;
	}
	std::cout << word;
}

void		PhoneBook::showContact(Contact* c, int index) {
	std::cout << std::endl << "-------------------------------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|Phone Num.|Darkest S.|" << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "|         " << index;
	this->addWord(c->getFirstName());
	this->addWord(c->getLastName());
	this->addWord(c->getNickname());
	this->addWord(c->getPhoneNumber());
	this->addWord(c->getDarkestSecret());
	std::cout << "|" << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl << std::endl;
}

void		PhoneBook::search(void) {
	std::string	str;
	Contact		*c;
	int			i;

	i = 0;
	std::cout << std::endl << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->numContacts && i < 8) {
		c = this->getContactByIndex(i);
		std::cout << "|         " << i;
		this->addWord(c->getFirstName());
		this->addWord(c->getLastName());
		this->addWord(c->getNickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		i++;
	}
	std::cout << std::endl << "Enter the index of the contact you want to see: ";
	std::getline(std::cin, str);
	c = this->getContactByIndex(str[0] - '0');
	if (!c) {
		std::cout << std::endl << "This index not exist!!!" << std::endl << std::endl;
		return ;
	}
	this->showContact(c, i);
}
