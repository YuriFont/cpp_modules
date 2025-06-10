/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:00:33 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/10 11:36:34 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <sstream>
#include <cstdlib>

class BitcoinExchange {

    private:

        std::map<std::string, float> _database;
        void    _loadDatabase(void);
        void    print(void);
    
    public:

        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &btc);
        BitcoinExchange &operator=(const BitcoinExchange &btc);
        ~BitcoinExchange(void);

        class CouldNotOpenFile : public std::exception {
            public:
                virtual const char* what(void) const throw() {
                    return "Error: Could not open the file.";
                }
        };

        class ColumnWithError : public std::exception {
            public:
                virtual const char* what(void) const throw() {
                    return "Error: Column with error. Expected: date,exchange_rate";
                }
        };

};

#endif
