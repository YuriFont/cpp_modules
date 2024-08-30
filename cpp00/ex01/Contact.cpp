/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:32:47 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/30 10:18:43 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::getFirstName(void) {
	return firstName;
}

void		Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

std::string	Contact::getLastName(void) {
	return lastName;
}

void		Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

std::string	Contact::getNickname(void) {
	return nickname;
}

void		Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

std::string	Contact::getPhoneNumber(void) {
	return phoneNumber;
}

void		Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret(void) {
	return darkestSecret;
}

void		Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}
