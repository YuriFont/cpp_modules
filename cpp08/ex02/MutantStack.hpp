/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:43:19 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/02 19:05:50 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>


template <typename T>
class MutantStack : public std::stack<T> {
  
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        
        iterator begin(void) {
            return this->c.begin();
        }

        iterator end(void) {
            return this->c.end();
        }

        const_iterator begin(void) const {
            return this->c.begin();
        }

        const_iterator end(void) const {
            return this->c.end();
        }

};

#endif
