/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:17:40 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/30 09:25:52 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

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
        void        setLasttName(std::string lastName);
		std::string	getNickname(void);
        void        setNickname(std::string nickname);
        std::string	getPhoneNumber(void);
        void        setPhoneNumber(std::string phoneNumber);
		std::string	getDarkestSecret(void);
        void        setDarkestSecret(std::string darkestSecret);

};

#endif
