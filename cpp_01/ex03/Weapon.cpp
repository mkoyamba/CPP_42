/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:47:39 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 20:11:42 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	return ;
}

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon(void) {
	return ;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const & Weapon::getType(void) const {
	return this->_type;
}