/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:16:15 by yufonten          #+#    #+#             */
/*   Updated: 2026/01/05 15:19:02 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN &rpn) {
    if (this != &rpn)
        *this = rpn;
}

RPN &RPN::operator=(const RPN &rpn) {
    if (this != &rpn)
        *this = rpn;
    return *this;
}

RPN::~RPN(void) {}

void printStack(std::stack<int> s) {
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

int RPN::calculate(const std::string &str) {
    std::stringstream ss(str);
    std::string token;

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stackNumbers.size() < 2) {
                std::cout << "Error: invalid expression\n";
                return 1;
            }
            int a = stackNumbers.top();
            stackNumbers.pop();
            int b = stackNumbers.top();
            stackNumbers.pop();
            if (token == "+")
                stackNumbers.push(b + a);
            else if (token == "-")
                stackNumbers.push(b - a);
            else if (token == "*")
                stackNumbers.push(b * a);
            else if (token == "/") {
                if (a == 0) {
                    std::cout << "Error: division by zero\n";
                    return 1;
                }
                stackNumbers.push(b / a);
            } 
        } else {
            int n;
            std::stringstream num_ss(token);
            if (!(num_ss >> n) || num_ss.rdbuf()->in_avail() != 0 || token.find_first_not_of("0123456789") != std::string::npos) {
                std::cout << "Error: invalid expression\n";
                return 1;
            }
            stackNumbers.push(n);
        }
    }
    if (stackNumbers.size() != 1) {
        std::cout << "Error: invalid expression\n";
        return 1;
    }

    std::cout << stackNumbers.top() << std::endl;
    return 0;
}
