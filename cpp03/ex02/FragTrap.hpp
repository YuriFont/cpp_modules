/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:09:30 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/03 18:09:30 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:

        FragTrap(void);
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &fragtrap);
        FragTrap    &operator=(const FragTrap &fragtrap);
        ~FragTrap(void);
        void    attack(const std::string& target);
        void    guardGate(void);

};

#endif
