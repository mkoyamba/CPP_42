/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:24:58 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/29 13:22:20 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaIce.hpp"

MateriaIce::MateriaIce(void) {
	this->type = "ice";
	std::cout << "MateriaIce constructor called" << std::endl;
}

MateriaIce::MateriaIce(std::string const &type) {
	this->type = type;
	std::cout << "MateriaIce constructor called" << std::endl;
}

MateriaIce::MateriaIce(const MateriaIce &toCopy) {
	std::cout << "MateriaIce copy constructor called" << std::endl;
	*this = toCopy;
}

MateriaIce::~MateriaIce(void) {
	std::cout << "MateriaIce destructor called" << std::endl;
}

MateriaIce	&MateriaIce::operator=(const MateriaIce &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

std::string const & MateriaIce::getType() const {
	return this->type;
}

MateriaIce	*MateriaIce::clone(void) const {
	return new MateriaIce(this->getType());
}

void	MateriaIce::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}