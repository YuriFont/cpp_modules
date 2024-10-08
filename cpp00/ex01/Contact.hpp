/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:17:40 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/01 17:11:22 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

class Contact {

    private:
        std::string	firstName;
        std::string	lastName;
        std::string	nickname;
        std::string	phoneNumber;
        std::string	darkestSecret;
    public:
        Contact();
        ~Contact();
        std::string	getFirstName(void);
        void        setFirstName(std::string firstName);
		std::string	getLastName(void);
        void        setLastName(std::string lastName);
		std::string	getNickname(void);
        void        setNickname(std::string nickname);
        std::string	getPhoneNumber(void);
        void        setPhoneNumber(std::string phoneNumber);
		std::string	getDarkestSecret(void);
        void        setDarkestSecret(std::string darkestSecret);

};

#endif
