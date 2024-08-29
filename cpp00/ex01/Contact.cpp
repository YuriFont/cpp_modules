/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:32:47 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/28 22:38:09 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) : firstName(firstName), lastName(lastName), nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret) {

}

std::string	Contact::getFirstName(void) {
	return this->firstName;
}

void	Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

std::string	Contact::getLastName(void) {
	return this->lastName;
}

void	Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

std::string	Contact::getNickname(void) {
	return this->nickname;
}

void	Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

std::string	Contact::getPhoneNumber(void) {
	return this->phoneNumber;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret(void) {
	return this->darkestSecret;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}
