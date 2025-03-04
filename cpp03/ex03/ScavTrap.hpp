/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:36:56 by yufonten          #+#    #+#             */
/*   Updated: 2025/02/20 09:36:56 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__
#include "ClapTrap.hpp"
#define ScavTrap_energyPoints 50

class ScavTrap: virtual public ClapTrap {

    public:

        ScavTrap(void);
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap    &operator=(const ScavTrap &scavtrap);
        ~ScavTrap(void);
        void    attack(const std::string& target);
        void    guardGate(void);

};

#endif
