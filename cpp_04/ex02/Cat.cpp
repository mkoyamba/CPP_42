/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/12 15:18:23 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &toCopy) {
	this->_brain = new Brain(*toCopy.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &toAffect) {
	this->type = toAffect.getType();
	*this->_brain = *toAffect.getBrain();
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const {
	return this->_brain;
}