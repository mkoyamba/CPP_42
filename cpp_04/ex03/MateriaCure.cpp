/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:32:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/02/06 11:02:02 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaCure.hpp"

MateriaCure::MateriaCure(void) {
	this->type = "cure";
	std::cout << "MateriaCure constructor called" << std::endl;
}

MateriaCure::MateriaCure(std::string const &type) {
	this->type = type;
	std::cout << "MateriaCure constructor called" << std::endl;
}

MateriaCure::MateriaCure(const MateriaCure &toCopy) : AMateria() {
	std::cout << "MateriaCure copy constructor called" << std::endl;
	*this = toCopy;
}

MateriaCure::~MateriaCure(void) {
	std::cout << "MateriaCure destructor called" << std::endl;
}

MateriaCure	&MateriaCure::operator=(const MateriaCure &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

std::string const & MateriaCure::getType() const {
	return this->type;
}

MateriaCure	*MateriaCure::clone(void) const {
	return new MateriaCure(this->getType());
}

void	MateriaCure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}