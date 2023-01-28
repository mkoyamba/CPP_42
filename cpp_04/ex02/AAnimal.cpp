/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:05 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/28 12:36:04 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

AAnimal::AAnimal(void) {
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &toCopy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

void	AAnimal::makeSound(void) const {
	std::cout << "Unknown type of animal..." << std::endl;
}

const std::string	AAnimal::getType(void) const {
	return this->type;
}