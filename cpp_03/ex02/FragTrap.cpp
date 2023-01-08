/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:31:18 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 15:45:07 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = "default";
	this->_hp = 100;
	this->_energyPoints = 100;
	this->_damages = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energyPoints = 100;
	this->_damages = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
	ClapTrap::_name = toCopy.ClapTrap::_name;
	ClapTrap::_hp = toCopy.ClapTrap::_hp;
	ClapTrap::_energyPoints = toCopy.ClapTrap::_energyPoints;
	ClapTrap::_damages = toCopy.ClapTrap::_damages;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &toAffect) {
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

void	FragTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0)
	{
		std::cout << "No energy points left! Can't perform this action!" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "FragTrap " << this->_name
				<< " attacks " << target
				<< ", causing " << this->_damages
				<< " points of damage!\n-> "
				<< this->_energyPoints << " energy points left."
				<< std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " wants to high five!" << std::endl;
}