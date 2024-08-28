/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:17:40 by yufonten          #+#    #+#             */
/*   Updated: 2024/08/28 16:36:21 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.h"

class Contact {

    private:
        std::string name;
        std::string number;

    public:
        Contact(std::string name, std::string number);
        std::string getName(void);
        void        setName(std::string name);
        std::string getNumber(void);
        void        setNumber(std::string number);

};

#endif
