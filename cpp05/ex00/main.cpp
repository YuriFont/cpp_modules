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
    } catch (const std::exception& e) {
        std::cout << "Caught the exception: " << e.what() << std::endl;
    }
    return 0;
}
