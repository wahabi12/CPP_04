/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 08:08:27 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 08:27:37 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & name) : name(name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
}

Character::Character(Character const & other) : name(other.name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

Character & Character::operator=(Character const & other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
        }
    }
    return *this;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
