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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try {
        Bureaucrat a("Yuri", 1);
        Bureaucrat b("Erick", 44);
        Bureaucrat c("Thaís", 136);

        a.demote();
        b.demote();
        c.promote();
        c.demote();

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;

        std::cout << std::endl;

        ShrubberyCreationForm f1("C");
        RobotomyRequestForm f2("B");
        PresidentialPardonForm f3("A");

        c.signForm(f1);
        b.signForm(f2);
        a.signForm(f3);

        std::cout << std::endl;

        c.executeForm(f1);
        b.executeForm(f2);
        a.executeForm(f3);
    } catch (const std::exception& e) {
        std::cout << "Caught the exception: " << e.what() << std::endl;
    }
    return 0;
}
