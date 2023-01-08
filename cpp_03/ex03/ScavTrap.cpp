/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:01:06 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 15:45:41 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = "default";
	this->_hp = 100;
	this->_energyPoints = 50;
	this->_damages = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energyPoints = 50;
	this->_damages = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
	ClapTrap::_name = toCopy.ClapTrap::_name;
	ClapTrap::_hp = toCopy.ClapTrap::_hp;
	ClapTrap::_energyPoints = toCopy.ClapTrap::_energyPoints;
	ClapTrap::_damages = toCopy.ClapTrap::_damages;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &toAffect) {
	this->_name = toAffect._name;
	this->_hp = toAffect._hp;
	this->_energyPoints = toAffect._energyPoints;
	this->_damages = toAffect._damages;
	ClapTrap::_name = toAffect.ClapTrap::_name;
	ClapTrap::_hp = toAffect.ClapTrap::_hp;
	ClapTrap::_energyPoints = toAffect.ClapTrap::_energyPoints;
	ClapTrap::_damages = toAffect.ClapTrap::_damages;
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0)
	{
		std::cout << "No energy points left! Can't perform this action!" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "ScavTrap " << this->_name
				<< " attacks " << target
				<< ", causing " << this->_damages
				<< " points of damage!\n-> "
				<< this->_energyPoints << " energy points left."
				<< std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " enters is Gate Keeper mode!" << std::endl;
}