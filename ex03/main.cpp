/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:45:28 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 08:27:47 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main() {
    Character* me = new Character("me");
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    me->equip(ice);
    me->equip(cure);

    Character* bob = new Character("bob");

    me->use(0, *bob);  // Utilise l'Ice Materia sur bob
    me->use(1, *bob);  // Utilise la Cure Materia sur bob

    delete bob;
    delete me;  // Suppression de me supprime également l'Ice et la Cure Materia

    return 0;
}
