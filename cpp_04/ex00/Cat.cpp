/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:45:38 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &toCopy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = toCopy;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}