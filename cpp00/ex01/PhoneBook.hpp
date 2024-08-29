/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:49:22 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/28 22:38:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONE_HPP

#include "main.hpp"

class PhoneBook {

	private:
		std::list<Contact> phoneBookList;

	public:
		void	addContact(void);
		void	search(void);
		void	exit(void);

};

#endif
