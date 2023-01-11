/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 20:02:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &toCopy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = toCopy;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "MeowUwU!" << std::endl;
}