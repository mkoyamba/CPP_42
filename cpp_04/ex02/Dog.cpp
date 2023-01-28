/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:14 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/12 15:19:03 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &toCopy) {
	this->_brain = new Brain(*toCopy.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
	*this = toCopy;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &toAffect) {
	this->type = toAffect.getType();
	*this->_brain = *toAffect.getBrain();
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Wouf!" << std::endl;
}

Brain *Dog::getBrain(void) const {
	return this->_brain;
}