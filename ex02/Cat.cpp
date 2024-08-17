/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:49:52 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:18:43 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->type = "Cat";
    this->brain = new Brain();  // Allocation dynamique de Brain
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->brain = new Brain(*other.brain);  // Copie profonde de Brain
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;  // Supprimer l'ancien cerveau
        this->brain = new Brain(*other.brain);  // Copie profonde du nouveau cerveau
    }
    std::cout << "Cat copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete this->brain;  // Suppression du cerveau lors de la destruction
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;  // Son du chat
}
