/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:49:12 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 19:06:34 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Unnamed zombie created." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}