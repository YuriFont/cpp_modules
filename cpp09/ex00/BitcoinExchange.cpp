/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:29:11 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/10 11:35:06 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
    _loadDatabase();
    print();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &btc) {
    if (this != &btc)
        *this = btc;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &btc) {
    if (this != &btc)
        *this = btc;
    return *this;
}

BitcoinExchange::~BitcoinExchange(void) {}

void   BitcoinExchange::_loadDatabase(void) {
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw   CouldNotOpenFile();

    std::string line;
    std::getline(file, line);
    if (line != "date,exchange_rate")
        throw ColumnWithError();

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, priceStr;
        float price;
        
        std::getline(ss, date, ',');
        std::getline(ss, priceStr);
        price = std::strtod(priceStr.c_str(), NULL);
        
        _database[date] = price;
    }
    file.close();
}

void    BitcoinExchange::print(void) {
    std::cout << _database["2011-03-26"] << std::endl;
}


