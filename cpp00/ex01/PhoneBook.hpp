/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:49:22 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/01 15:50:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONE_HPP

#include "Contact.hpp"

class PhoneBook {

	private:
		Contact contacts[8];
		int		numContacts;
		int		getNumContacts(void);
		Contact	*getContactByIndex(int index);
		void	addWord(std::string word);
		void	showContact(Contact* c, int index);
	public:
		PhoneBook();
		~PhoneBook();
		void	add(void);
		void	search(void);
};

#endif
