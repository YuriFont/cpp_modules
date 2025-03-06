/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:00:14 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 13:00:14 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:

        WrongCat(void);
        WrongCat(const WrongCat &wrongCat);
        WrongCat    &operator=(const WrongCat &wrongCat);
        ~WrongCat(void);
        void    makeSound(void) const;

};

#endif
