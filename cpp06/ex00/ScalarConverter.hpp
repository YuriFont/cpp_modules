/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:25:22 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/21 09:32:55 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter {
  
    private:

        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &sc);
        ScalarConverter &operator=(const ScalarConverter &sc);
        ~ScalarConverter(void);
    
    public:

        static void convert(const std::string &str);
    
};

#endif
