/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:06:44 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/06 23:06:44 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
}

Brain   &Brain::operator=(const Brain &brain) {
    if (this != &brain) {
        for (int i = 0; i < 100; i++)
            ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::~Brain(void) {
    std::cout << "Brain destructor called." << std::endl;
}
