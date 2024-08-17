/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:49:13 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:43:54 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) {
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Dog copy created." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        delete brain;
        type = other.type;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned." << std::endl;
    return *this;
}

Dog::~Dog() {
    delete this->brain;  // Suppression du cerveau lors de la destruction
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;  // Son du chien
}