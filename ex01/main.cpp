/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:44:45 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:19:21 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    // Test deep copy
    Dog basic;
    {
        Dog tmp = basic;
    } // Here tmp is destroyed, which will also destroy the tmp's Brain without affecting basic's Brain

    return 0;
}
