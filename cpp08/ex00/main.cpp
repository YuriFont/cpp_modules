/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:02:05 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/31 15:18:10 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void) {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Test 1 (vector, value 3 found): " << *it << " at position " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Test 1 failed: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 10);
        std::cout << "Test 2 (vector, value 10): " << *it << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Test 2 (vector, value 10 not found): " << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    try {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Test 3 (list, value 20 found): " << *it << " at position " << std::distance(lst.begin(), it) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Test 3 failed: " << e.what() << std::endl;
    }

    std::list<int> empty_lst;
    try {
        std::list<int>::iterator it = easyfind(empty_lst, 1);
        std::cout << "Test 4 (empty list, value 1): " << *it << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Test 4 (empty list, value 1 not found): " << e.what() << std::endl;
    }

    return 0;
}
