/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:57:00 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/03 10:09:42 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <stdexcept>

int main(void) {
    std::cout << "Testing with MutantStack:\n";
    MutantStack<int> mstack;
    try {
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top element: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size after pop: " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator itb = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout << "Elements in MutantStack: ";
        while (itb != ite) {
            std::cout << *itb << " ";
            ++itb;
        }
        std::cout << std::endl;

        const MutantStack<int> const_mstack = mstack;
        MutantStack<int>::const_iterator citb = const_mstack.begin();
        MutantStack<int>::const_iterator cite = const_mstack.end();
        std::cout << "Elements in const MutantStack: ";
        while (citb != cite) {
            std::cout << *citb << " ";
            ++citb;
        }
        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "\nTesting with std::list:\n";
    std::list<int> lst;
    try {
        lst.push_back(5);
        lst.push_back(17);
        std::cout << "Back element: " << lst.back() << std::endl;
        lst.pop_back();
        std::cout << "Size after pop: " << lst.size() << std::endl;
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);

        std::list<int>::iterator itb = lst.begin();
        std::list<int>::iterator ite = lst.end();
        std::cout << "Elements in std::list: ";
        while (itb != ite) {
            std::cout << *itb << " ";
            ++itb;
        }
        std::cout << std::endl;

        const std::list<int> const_lst = lst;
        std::list<int>::const_iterator citb = const_lst.begin();
        std::list<int>::const_iterator cite = const_lst.end();
        std::cout << "Elements in const std::list: ";
        while (citb != cite) {
            std::cout << *citb << " ";
            ++citb;
        }
        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}
