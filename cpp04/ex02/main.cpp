/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 23:52:36 by yufonten          #+#    #+#             */
/*   Updated: 2025/03/04 23:52:36 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    std::cout << std::endl;
    {
        int num_ideas = 10;
        AAnimal *animals[num_ideas];

        for (int i = 0; i < 10; i++) {
            if (i < (num_ideas / 2)) {
                animals[i] = new Dog();
            } else {
                animals[i] = new Cat();
            }
        }
        std::cout << std::endl;
        for (int i = 0; i < 10; i++)
            animals[i]->makeSound();
        std::cout << std::endl;
        for (int i = 0; i < 10; i++)
            delete animals[i];
    }
    return 0;
}
