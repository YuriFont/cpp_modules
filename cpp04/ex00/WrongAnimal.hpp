/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:42:54 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 12:42:54 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__
#include <iostream>

class WrongAnimal {

    protected:

        std::string type;

    public:

        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
        virtual ~WrongAnimal(void);
        void    makeSound(void) const;
        std::string getType(void) const;

};

#endif
