/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:54:18 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/26 11:55:00 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer {
    
    private:
    
        Serializer();
        Serializer(const Serializer&);
        Serializer& operator=(const Serializer&);
        ~Serializer();

    public:

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#endif