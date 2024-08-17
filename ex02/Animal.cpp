/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:48:59 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:49:55 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.cpp

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

// Implémentation du constructeur de copie
Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

// Implémentation de l'opérateur d'affectation
Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}
