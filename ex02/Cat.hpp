/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 06:49:39 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:18:25 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* brain;
public:
    Cat();
    Cat(const Cat& other);  // Constructeur de copie
    Cat& operator=(const Cat& other);
    ~Cat();
    void makeSound() const;
};

#endif
