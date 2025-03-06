/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:19:49 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 22:19:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__
#include "Animal.hpp"

class Dog: public Animal {

    public:

        Dog(void);
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        ~Dog(void);
        virtual void    makeSound(void) const;

};

#endif
