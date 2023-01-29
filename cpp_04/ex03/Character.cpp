/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:01:24 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/29 19:59:49 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string const &name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &toCopy) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = toCopy;
	this->_name = toCopy.getName();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = toCopy.getMateria(i);
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(const Character &toAffect) {
	this->_name = toAffect.getName();
	return *this;
}

MateriaIce	*Character::getMateria(int idx) const {
	return this->_inventory[idx];
}

std::string const & Character::getName() const {
	return this->_name;
}

void	Character::use(int idx, ICharacter& target) {
	
}