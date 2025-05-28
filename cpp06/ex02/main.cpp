/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:59:00 by yufonten          #+#    #+#             */
/*   Updated: 2025/05/28 09:01:11 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);

int main(void) {
    for (int i = 0; i < 5; i++) {
        Base* obj = generate();
        std::cout << "Test " << i + 1 << " with Base type:" << std::endl;
        std::cout << "  Using pointers: ";
        identify(obj);
        std::cout << "  Using references: ";
        identify(*obj);
        delete obj;
    }
    std::cout << "\nTests with known types:" << std::endl;
    A* a = new A();
    B* b = new B();
    C* c = new C();

    std::cout << "  Object A (pointer): ";
    identify(static_cast<Base*>(a));
    std::cout << "  Object A (reference): ";
    identify(*a);

    std::cout << "  Object B (pointer): ";
    identify(static_cast<Base*>(b));
    std::cout << "  Object B (reference): ";
    identify(*b);

    std::cout << "  Object C (pointer): ";
    identify(static_cast<Base*>(c));
    std::cout << "  Object C (reference): ";
    identify(*c);

    delete a;
    delete b;
    delete c;

    return 0;
}
