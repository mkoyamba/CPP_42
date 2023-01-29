/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/29 13:21:05 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->type = "Defaut";
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
	this->type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &toCopy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = toCopy;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &toAffect) {
	this->type = toAffect.getType();
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}