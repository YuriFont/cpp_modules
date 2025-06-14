/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:16:15 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/14 15:16:17 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN &rpn) {
    if (this != &rpn)
        *this = rpn;
}

RPN &RPN::operator=(const RNP &rpn) {
    if (this != &rpn)
        *this = rpn;
    return *this;
}

RPN::~RPN(void) {}

void    RPN::calculate(const std::string str) {
    if (str.empty())
        throw std::runtime_error("Error: empty expression.");
}
