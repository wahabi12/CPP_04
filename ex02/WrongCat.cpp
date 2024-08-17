/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:51:35 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:01:26 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow? (but in a wrong way)" << std::endl;
}
