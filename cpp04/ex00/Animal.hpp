/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:12:40 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 00:12:40 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__
#include <iostream>

class Animal {

    protected:

        std::string type;

    public:

        Animal(void);
        Animal(const Animal &animal);
        Animal  &operator=(const Animal &animal);
        ~Animal(void);
        virtual void    makeSound(void) const;
        std::string     getType(void) const;

};

#endif
