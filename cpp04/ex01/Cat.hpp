/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:34:30 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/05 22:34:30 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

    private:

        Brain   *_brain;

    public:

        Cat(void);
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        ~Cat(void);
        virtual void    makeSound(void) const;

};

#endif
