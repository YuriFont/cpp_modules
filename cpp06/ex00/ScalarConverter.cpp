/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:27:59 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/25 15:02:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cctype>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &sc) {
    (void)sc;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &sc) {
    if (this != &sc) {}
    return *this;
}

ScalarConverter::~ScalarConverter(void) {}

void    checkIfIsLiteralChar(const std::string &str, bool &isCharLiteral, char &charValue) {
    if (str.length() == 1 && !std::isdigit(str[0]) && std::isprint(str[0])) {
        isCharLiteral = true;
        charValue = str[0];
    }
}

void    checkIfIsValidInt(const std::string &str, bool &isIntLiteral, long &intValue) {
    char* endptr;
    intValue = std::strtol(str.c_str(), &endptr, 10);
    if (*endptr == '\0' && intValue >= INT_MIN && intValue <= INT_MAX) {
        isIntLiteral = true;
    }
}

void    checkIfIsValidDecimals(const std::string &str, bool &isFloatLiteral, float &floatValue, bool &isDoubleLiteral, double &doubleValue) {
    char* endptr;
        doubleValue = std::strtod(str.c_str(), &endptr);
    if (*endptr == 'f' && *(endptr + 1) == '\0') {
        isFloatLiteral = true;
        floatValue = static_cast<float>(doubleValue);
    } else if (*endptr == '\0') {
        isDoubleLiteral = true;
    }
}

void    handlePseudoLiterals(const std::string &str, float &floatValue, double &doubleValue) {
    if (str == "nan" || str == "nanf") {
        floatValue = static_cast<float>(0.0 / 0.0);
        doubleValue = 0.0 / 0.0;
    } else if (str == "+inf" || str == "+inff") {
        floatValue = FLT_MAX * 2.0f;
        doubleValue = DBL_MAX * 2.0;
    } else if (str == "-inf" || str == "-inff") {
        floatValue = -FLT_MAX * 2.0f;
        doubleValue = -DBL_MAX * 2.0;
    }
}

void    ScalarConverter::convert(const std::string &str) {
    bool isCharLiteral = false;
    bool isIntLiteral = false;
    bool isFloatLiteral = false;
    bool isDoubleLiteral = false;
    char charValue = 0;
    long intValue = 0;
    float floatValue = 0.0f;
    double doubleValue = 0.0;
    bool isPseudoLiteral = (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff");

    checkIfIsLiteralChar(str, isCharLiteral, charValue);
    if (!isCharLiteral)
        checkIfIsValidInt(str, isIntLiteral, intValue);
    if (!isCharLiteral && !isIntLiteral && !isPseudoLiteral)
        checkIfIsValidDecimals(str, isFloatLiteral, floatValue, isDoubleLiteral, doubleValue);
    if (isPseudoLiteral) {
        isFloatLiteral = true;
        handlePseudoLiterals(str, floatValue, doubleValue);
    }
    std::cout << "char: ";
    if (isCharLiteral)
        std::cout << "'" << charValue << "'" << std::endl;
    else if (isIntLiteral && intValue >= 32 && intValue <= 126)
        std::cout << "'" << static_cast<char>(intValue) << "'" << std::endl;
    else if (isFloatLiteral && floatValue >= 32.0f && floatValue <= 126.0f && floatValue == static_cast<int>(floatValue))
        std::cout << "'" << static_cast<char>(floatValue) << "'" << std::endl;
    else if (isDoubleLiteral && doubleValue >= 32.0 && doubleValue <= 126.0 && doubleValue == static_cast<int>(doubleValue))
        std::cout << "'" << static_cast<char>(doubleValue) << "'" << std::endl;
    else if (isPseudoLiteral)
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    
    std::cout << "int: ";
    if (isCharLiteral)
        std::cout << static_cast<int>(charValue) << std::endl;
    else if (isIntLiteral)
        std::cout << intValue << std::endl;
    else if (isFloatLiteral && floatValue >= static_cast<float>(INT_MIN) && floatValue <= static_cast<float>(INT_MAX) && floatValue == static_cast<int>(floatValue))
        std::cout << static_cast<int>(floatValue) << std::endl;
    else if (isDoubleLiteral && doubleValue >= INT_MIN && doubleValue <= INT_MAX && doubleValue == static_cast<int>(doubleValue))
        std::cout << static_cast<int>(doubleValue) << std::endl;
    else
        std::cout << "impossible" << std::endl;

    std::cout << "float: ";
    if (isCharLiteral)
        std::cout << static_cast<float>(charValue) << ".0f" << std::endl;
    else if (isIntLiteral)
        std::cout << static_cast<float>(intValue) << ".0f" << std::endl;
    else if (isFloatLiteral) {
        if (str == "nanf" || str == "nan")
            std::cout << "nanf" << std::endl;
        else if (str == "+inff" || str == "+inf")
            std::cout << "+inff" << std::endl;
        else if (str == "-inff" || str == "-inf")
            std::cout << "-inff" << std::endl;
        else {
            std::cout << floatValue;
            if (floatValue == static_cast<int>(floatValue))
                std::cout << ".0";
            std::cout << "f" << std::endl;
        }
    } else if (isDoubleLiteral && doubleValue >= -FLT_MAX && doubleValue <= FLT_MAX) {
        std::cout << static_cast<float>(doubleValue);
        if (doubleValue == static_cast<int>(doubleValue))
            std::cout << ".0";
        std::cout << "f" << std::endl;
    } else
        std::cout << "impossible" << std::endl;

    std::cout << "double: ";
    if (isCharLiteral)
        std::cout << static_cast<double>(charValue) << ".0" << std::endl;
    else if (isIntLiteral)
        std::cout << static_cast<double>(intValue) << ".0" << std::endl;
    else if (isFloatLiteral) {
        if (str == "nanf" || str == "nan")
            std::cout << "nan" << std::endl;
        else if (str == "+inff" || str == "+inf")
            std::cout << "+inf" << std::endl;
        else if (str == "-inff" || str == "-inf")
            std::cout << "-inf" << std::endl;
        else {
            std::cout << static_cast<double>(floatValue);
            if (floatValue == static_cast<int>(floatValue)) {
                std::cout << ".0";
            }
            std::cout << std::endl;
        }
    } else if (isDoubleLiteral) {
        std::cout << doubleValue;
        if (doubleValue == static_cast<int>(doubleValue))
            std::cout << ".0";
        std::cout << std::endl;
    } else
        std::cout << "impossible" << std::endl;
}
