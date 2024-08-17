/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 07:11:13 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 07:20:10 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
public:
    std::string ideas[100];

    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};

#endif
