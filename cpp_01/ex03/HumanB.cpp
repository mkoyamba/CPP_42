/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:47:31 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 20:49:39 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	if (!this->_weapon)
		return ;
	std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}