/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:01:21 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/03 11:26:27 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = toCopy;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &toAffect) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = toAffect.getMateria(i);
	return *this;
}

AMateria	*MateriaSource::getMateria(int idx) const {
	if (idx < 0 || idx > 3)
		return NULL;
	return this->_inventory[idx];
}

void	MateriaSource::learnMateria(AMateria* materia) {
	int	idx = 0;

	for (idx = 0; idx < 3; idx++)
		if (this->_inventory[idx] == NULL)
			break ;
	this->_inventory[idx] = new MateriaIce();
	this->_inventory[idx] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	int	idx = 0;
	MateriaIce	*result;

	for (idx = 0; idx < 3; idx++)
		if (this->_inventory[idx] && this->_inventory[idx]->getType().compare(type) == 0)
			break ;
	if (!this->_inventory[idx])
		return NULL;
	if (!type.compare("ice"))
		result = new MateriaIce();
	else
		result = (MateriaIce *)new MateriaCure();
	return result;
}