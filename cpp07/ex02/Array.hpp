/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:03:51 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/29 09:32:02 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
  
    private:

        T *elements;
        unsigned int n;
    
    public:

        Array(void);
        Array(unsigned int n);
        Array(const Array &array);
        Array   &operator=(const Array &array);
        ~Array(void);
        T   &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        unsigned int size(void) const;
    
};

#include "Array.tpp"

#endif
