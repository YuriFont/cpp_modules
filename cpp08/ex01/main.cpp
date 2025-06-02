/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:44:24 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/02 11:44:24 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main() {
    srand(time(0));

    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Test 1 - Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 1 - Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 1 - Error: " << e.what() << std::endl;
    }

    try {
        Span sp(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4);
    } catch (const std::exception &e) {
        std::cout << "Test 2 - Expected error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.shortestSpan();
    } catch (const std::exception &e) {
        std::cout << "Test 3 - Expected error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.addNumber(42);
        sp.longestSpan();
    } catch (const std::exception &e) {
        std::cout << "Test 4 - Expected error: " << e.what() << std::endl;
    }

    try {
        Span sp(10000);
        for (int i = 0; i < 10000; ++i) {
            sp.addNumber(rand() % 1000000);
        }
        std::cout << "Test 5 - Large numbers shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 5 - Large numbers longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 5 - Error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.addNumber(10);
        sp.addNumber(10);
        sp.addNumber(10);
        std::cout << "Test 6 - Shortest span with duplicates: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 6 - Longest span with duplicates: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 6 - Error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.addNumber(-5);
        sp.addNumber(-10);
        sp.addNumber(0);
        sp.addNumber(5);
        std::cout << "Test 7 - Shortest span with negatives: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 7 - Longest span with negatives: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 7 - Error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        
        Span sp_copy(sp);
        sp_copy.addNumber(9);
        sp_copy.addNumber(11);
        
        std::cout << "Test 8 - Original shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 8 - Copy shortest span: " << sp_copy.shortestSpan() << std::endl;
        std::cout << "Test 8 - Original longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Test 8 - Copy longest span: " << sp_copy.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 8 - Error: " << e.what() << std::endl;
    }

    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        
        Span sp_assigned(3);
        sp_assigned = sp;
        sp_assigned.addNumber(9);
        
        std::cout << "Test 9 - Original shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Test 9 - Assigned shortest span: " << sp_assigned.shortestSpan() << std::endl;
        std::cout << "Test 9 - Original longest span: " << sp.longestSpan() << std::endl;
        std::cout << "Test 9 - Assigned longest span: " << sp_assigned.longestSpan() << std::endl;
        
        sp_assigned = sp_assigned;
        std::cout << "Test 9 - Self-assignment shortest span: " << sp_assigned.shortestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Test 9 - Error: " << e.what() << std::endl;
    }

    Span sp3(10);
    std::vector<int> values;
    values.push_back(1);
    values.push_back(5);
    values.push_back(10);
    values.push_back(15);
    values.push_back(20);
    values.push_back(25);
    values.push_back(30);
    values.push_back(35);
    values.push_back(40);
    values.push_back(45);
    try {
        sp3.addNumber(values.begin(), values.end());
        std::cout << "Test 10 - Shortest span: " << sp3.shortestSpan() << std::endl;
        std::cout << "Test 10 - Longest span: " << sp3.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Test 10 - Error: " << e.what() << std::endl;
    }

    return 0;
}
