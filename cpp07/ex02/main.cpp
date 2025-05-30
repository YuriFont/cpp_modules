/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:30:48 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/30 09:48:49 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(void) {
    std::cout << "Test 1 - Default constructor\n";
    Array<int> empty;
    std::cout << "Size of empty array = " << empty.size() << std::endl;

    std::cout << std::endl;

    std::cout << "Test 2 - Constructor with parameter (n = 5)\n";
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i + 1;
    std::cout << "Filled array = ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << "\nSize = " << arr.size() << std::endl;

    std::cout << std::endl;

    std::cout << "Test 3 - Copy constructor\n";
    Array<int> copy(arr);
    copy[0] = 100;
    std::cout << "Original Array: ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << "\nCopy array (modified): ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << "\nSize of copy array = " << copy.size() << std::endl;

    std::cout << std::endl;

    std::cout << "Test 4 - Assignment Operator\n";
    Array<int> assigned;
    assigned = arr;
    assigned[0] = 200;
    std::cout << "Original array: ";
    for (unsigned int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nAssignment array (modified): ";
    for (unsigned int i = 0; i < assigned.size(); ++i) {
        std::cout << assigned[i] << " ";
    }
    std::cout << "\nSize of assignment array = " << assigned.size() << std::endl;
    
    std::cout << std::endl;

    std::cout << "Test 5 - Access out of bounds\n";
    try {
        std::cout << arr[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught exception: Index out of bounds" << std::endl;
    }
    
    std::cout << "Tests 6 - Array of doubles\n";
    Array<double> dArr(3);
    dArr[0] = 1.1;
    dArr[1] = 2.2;
    dArr[2] = 3.3;
    std::cout << "Array of doubles: ";
    for (unsigned int i = 0; i < dArr.size(); ++i) {
        std::cout << dArr[i] << " ";
    }
    std::cout << "\nsize = " << dArr.size() << std::endl;

    std::cout << "\n42 Tests\n";

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    
    return 0;
}
