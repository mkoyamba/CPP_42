/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:05 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:41:03 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &toCopy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Unknown type of animal..." << std::endl;
}

const std::string	Animal::getType(void) const {
	return this->type;
}