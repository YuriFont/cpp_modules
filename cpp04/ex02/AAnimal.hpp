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

#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__
#include <iostream>

class AAnimal {

    protected:

        std::string type;

    public:

        AAnimal(void);
        AAnimal(const AAnimal &animal);
        AAnimal  &operator=(const AAnimal &aanimal);
        virtual ~AAnimal(void);
        virtual void    makeSound(void) const = 0;
        std::string     getType(void) const;

};

#endif
