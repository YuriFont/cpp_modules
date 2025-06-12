/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:29:11 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/12 10:47:26 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
    _loadDatabase();
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
        throw CouldNotOpenFile();

    std::string line;
    std::getline(file, line);
    if (line != "date,exchange_rate")
        throw DataFileHeaderError();

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

bool    BitcoinExchange::_isDigitsOnly(const std::string &str) {
    if (str.empty()) 
        return false;   
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
        if (!std::isdigit(*it)) return false;
    return true;
}

bool    BitcoinExchange::_isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::_getMaxDaysInMonth(int month, int year) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return _isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

bool    BitcoinExchange::_checkDate(const std::string date, int &yearI, int &monthI, int &dayI) {
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    if (!_isDigitsOnly(year) || !_isDigitsOnly(month) || !_isDigitsOnly(day)) return false;

    monthI = std::atoi(month.c_str());
    if (monthI > 12) return false;
    dayI = std::atoi(day.c_str());
    yearI = std::atoi(year.c_str());
    if (dayI > _getMaxDaysInMonth(monthI, yearI)) return false;
    
    return true;
}

bool    BitcoinExchange::_checkValue(const std::string &valueStr, float &value) {
    char *end;
    value = std::strtod(valueStr.c_str(), &end);
    if (*end != '\0') return false;
    if (value < 0) return false;
    if (value > 1000) return false;
    return true;
}

std::string BitcoinExchange::_formatFloat(float value) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << value;
    std::string str = ss.str();

    if (str.length() > 0 && str[str.length() - 1] == '0')
        str.erase(str.length() - 1);
    return str;
}

void    BitcoinExchange::processData(const std::string &filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw CouldNotOpenFile();

    std::string line;
    std::getline(file, line);
    if (line != "date | value")
        throw InputFileHeaderError();
        
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date, valueStr, delimiter;
        int yearI, monthI, dayI;

        if (!std::getline(ss, date, ' ') || !std::getline(ss, delimiter, ' ') || delimiter != "|" || !std::getline(ss, valueStr)) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!_checkDate(date, yearI, monthI, dayI)) {
            std::cout << "Error: invalid date => " << date << std::endl;
            continue;
        }
        float value;
        if (!_checkValue(valueStr, value)) {
            if (value < 0)
                std::cout << "Error: not a positive number." << std::endl;
            else
                std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        std::map<std::string, float>::const_iterator it = _database.lower_bound(date);
        if (it == _database.end()) {
            if (_database.empty()) {
                std::cout << "Error: no database entry for date " << date << std::endl;
                continue;
            }
            it--;
        } else if (it->first != date && it == _database.begin()) {
            std::cout << "Error: no earlier date available for " << date << std::endl;
            continue;
        } else if (it->first != date)
            it--;
        float result = value * it->second;
        std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << _formatFloat(result) << std::endl;
    }
    file.close();
}
