/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 07:44:28 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:44:33 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound(); // Woof!
    i->makeSound(); // Meow!

    delete j;
    delete i;

    return 0;
}
