/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:45:01 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/04 14:45:01 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

    private:

        std::string _name;
        
    public:

        DiamondTrap(void);
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator=(const DiamondTrap &diamondtrap);
        ~DiamondTrap(void);
        void    whoAmI(void);
        using   ScavTrap::attack;

};

#endif
