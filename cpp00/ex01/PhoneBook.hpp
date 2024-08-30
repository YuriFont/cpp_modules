/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:49:22 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/30 16:16:59 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONE_HPP

#include "Contact.hpp"

class PhoneBook {

	private:
		Contact contacts[8];
		int		numContacts;
	public:
		PhoneBook();
		~PhoneBook();
		int		getNumContacts(void);
		Contact	*getContactByIndex(int index);
		void	add(void);
};

#endif
