/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:14 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:45:46 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &toCopy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Wouf!" << std::endl;
}