/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:52 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 14:42:50 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default") ,_hp(10), _energyPoints(10), _damages(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) ,_hp(10), _energyPoints(10), _damages(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &toAffect) {
	this->_name = toAffect._name;
	this->_hp = toAffect._hp;
	this->_energyPoints = toAffect._energyPoints;
	this->_damages = toAffect._damages;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0 || this->_hp == 0)
	{
		std::cout << "No hit or energy points left! Can't perform this action!" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name
				<< " attacks " << target
				<< ", causing " << this->_damages
				<< " points of damage!-> \n"
				<< this->_energyPoints << " energy points left."
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp < amount) {
		std::cout << this->_name
					<< " takes " << this->_hp
					<< " damages points, causing it to fall from " << this->_hp
					<< " to 0 hit points!"
					<< std::endl;
		this->_hp = 0;
	}
	else {
		this->_hp -= amount;
		std::cout << this->_name
					<< " takes " << amount
					<< " damages points, causing it to fall from " << this->_hp + amount
					<< " to " << this->_hp << " hit points!"
					<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0)
	{
		std::cout << "No energy points left! Can't perform this action!" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	this->_hp += amount;
	std::cout << this->_name
				<< " repairs " << amount
				<< " hit points, causing it to be at " << this->_hp
				<< " hit point !\n-> "
				<< this->_energyPoints << " energy points left."
				<< std::endl;
}

std::string	ClapTrap::getName(void) {
	return this->_name;
}

int	ClapTrap::getHp(void) {
	return this->_hp;
}

int	ClapTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

int	ClapTrap::getDamages(void) {
	return this->_damages;
}