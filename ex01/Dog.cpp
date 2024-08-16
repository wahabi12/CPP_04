/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:49:13 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:17:19 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->type = "Dog";
    this->brain = new Brain();  // Allocation dynamique de Brain
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->brain = new Brain(*other.brain);  // Copie profonde de Brain
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;  // Supprimer l'ancien cerveau
        this->brain = new Brain(*other.brain);  // Copie profonde du nouveau cerveau
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete this->brain;  // Suppression du cerveau lors de la destruction
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;  // Son du chien
}