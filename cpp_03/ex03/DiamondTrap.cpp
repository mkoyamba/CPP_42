/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:49:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 15:46:17 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = "default";
	ClapTrap::_name += "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damages = FragTrap::_damages;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name += "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damages = FragTrap::_damages;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
	ClapTrap::_name = toCopy.ClapTrap::_name;
	ClapTrap::_hp = toCopy.ClapTrap::_hp;
	ClapTrap::_energyPoints = toCopy.ClapTrap::_energyPoints;
	ClapTrap::_damages = toCopy.ClapTrap::_damages;
	ScavTrap::_name = toCopy.ScavTrap::_name;
	ScavTrap::_hp = toCopy.ScavTrap::_hp;
	ScavTrap::_energyPoints = toCopy.ScavTrap::_energyPoints;
	ScavTrap::_damages = toCopy.ScavTrap::_damages;
	FragTrap::_name = toCopy.FragTrap::_name;
	FragTrap::_hp = toCopy.FragTrap::_hp;
	FragTrap::_energyPoints = toCopy.FragTrap::_energyPoints;
	FragTrap::_damages = toCopy.FragTrap::_damages;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toAffect) {
	this->_name = toAffect._name;
	this->_hp = toAffect._hp;
	this->_energyPoints = toAffect._energyPoints;
	this->_damages = toAffect._damages;
	ClapTrap::_name = toAffect.ClapTrap::_name;
	ClapTrap::_hp = toAffect.ClapTrap::_hp;
	ClapTrap::_energyPoints = toAffect.ClapTrap::_energyPoints;
	ClapTrap::_damages = toAffect.ClapTrap::_damages;
	ScavTrap::_name = toAffect.ScavTrap::_name;
	ScavTrap::_hp = toAffect.ScavTrap::_hp;
	ScavTrap::_energyPoints = toAffect.ScavTrap::_energyPoints;
	ScavTrap::_damages = toAffect.ScavTrap::_damages;
	FragTrap::_name = toAffect.FragTrap::_name;
	FragTrap::_hp = toAffect.FragTrap::_hp;
	FragTrap::_energyPoints = toAffect.FragTrap::_energyPoints;
	FragTrap::_damages = toAffect.FragTrap::_damages;
	return *this;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Diamond trap name is " << this->_name << " from Clap trap named " << ClapTrap::_name << '.' << std::endl;
}