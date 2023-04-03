/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:01:24 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/03 10:54:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_trash[i] = NULL;
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
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(const Character &toAffect) {
	this->_name = toAffect.getName();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = toAffect.getMateria(i);
	for (int i = 0; i < 4; i++)
		this->_trash[i] = toAffect.getTrash(i);
	return *this;
}

AMateria	*Character::getTrash(int idx) const {
	if (idx < 0 || idx > 3)
		return NULL;
	return this->_trash[idx];
}

AMateria	*Character::getMateria(int idx) const {
	if (idx < 0 || idx > 3)
		return NULL;
	return this->_inventory[idx];
}

std::string const & Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	int	i = 0;

	while (this->_inventory[i])
		i++;
	if (i == 4)
		return ;
	else
		this->_inventory[i] = m;
}

void	Character::unequip(int idx) {
	int	i = 0;
	
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	while (this->_trash[i])
		i++;
	if (i >= 3)
		this->_trash[0] = this->_inventory[idx];
	else
		this->_trash[i] = this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	if (this->_inventory[idx]->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_inventory[idx]->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
