/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:22 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/12 13:50:44 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = toCopy;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &toAffect) {
	this->_type = toAffect.getType();
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Unknown type of WrongAnimal..." << std::endl;
}

const std::string	WrongAnimal::getType(void) const {
	return this->_type;
}