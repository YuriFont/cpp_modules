/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:56:22 by yufonten          #+#    #+#             */
/*   Updated: 2024/09/07 23:56:22 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB {

    public:

        HumanB(std::string name);
		~HumanB(void);

        void	attack(void);
        void	setWeapon(Weapon& weapon);

    private:

        Weapon*		weapon;
        std::string	name;

};

#endif
