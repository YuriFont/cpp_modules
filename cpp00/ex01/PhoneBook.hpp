/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:49:22 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/29 20:31:39 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONE_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {

	private:
		Contact contacts[MAX_CONTACTS];
		int		numContacts;

	public:
		PhoneBook();

		int				getNumContacts(void);
		const Contact&	getContactByIndex(int index);
		const Contact&	creatContact(void);
		void			addContact(const Contact& newContact);
		void			search(void);
		void			exit(void);

};

#endif
