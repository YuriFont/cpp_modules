/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:11:22 by yufonten          #+#    #+#             */
/*   Updated: 2025/04/29 08:11:22 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat a("Yuri", 150);
        Bureaucrat b("Erick", 1);
        Bureaucrat c("Thaís", 75);

        a.promote();
        b.demote();
        c.promote();
        c.demote();

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;

        std::cout << std::endl;

        Form f1("F1", 75, 20);
        Form f2("F2", 148, 30);
        Form f3("F3", 2, 10);

        f1.beSigned(c);
        b.signForm(f3);
        a.signForm(f2);

        std::cout << std::endl;

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught the exception: " << e.what() << std::endl;
    }
    return 0;
}
