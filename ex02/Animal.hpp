/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:48:45 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:50:51 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const = 0;

    private:
    // Désactiver le constructeur de copie et l'opérateur d'affectation
    Animal(const Animal &);
    Animal &operator=(const Animal &);
    
};

#endif
