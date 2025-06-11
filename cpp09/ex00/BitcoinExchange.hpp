/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:00:33 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/11 11:45:02 by yufonten         ###   ########.fr       */
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
        bool    _checkDate(const std::string date);
        bool    _isDigitsOnly(const std::string &str);
        int     _getMaxDaysInMonth(int month, int year);
        bool    _isLeapYear(int year);
        bool    _checkValue(const std::string &valueStr, float &value);
    
    public:

        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &btc);
        BitcoinExchange &operator=(const BitcoinExchange &btc);
        ~BitcoinExchange(void);
        void    processData(const std::string &file);

        class CouldNotOpenFile : public std::exception {
            public:
                virtual const char* what(void) const throw() {
                    return "Error: Could not open the file.";
                }
        };

        class DataFileHeaderError : public std::exception {
            public:
                virtual const char* what(void) const throw() {
                    return "Error: Header in data.csv with error. Expected: date,exchange_rate";
                }
        };

        class InputFileHeaderError : public std::exception {
            public:
                virtual const char* what(void) const throw() {
                    return "Error: Header in input file with error. Expected: date | value";
                }
        };

};

#endif
