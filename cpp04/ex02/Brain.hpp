/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:02:44 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 23:02:44 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__
#include <iostream>

class Brain {

    public:

        Brain(void);
        Brain(const Brain &brain);
        Brain   &operator=(const Brain &brain);
        ~Brain(void);
        std::string ideas[100];

};

#endif
