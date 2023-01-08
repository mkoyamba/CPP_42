/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:23 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 14:27:45 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int	main(void)
{
	ClapTrap	A("Hello");
	ClapTrap	B("World");
	ClapTrap	C(B);
	ScavTrap	D("Salut");
	ScavTrap	E("Monde");
	ScavTrap	F(E);

	std::cout << "\n\n" << std::endl;
	D.attack("B");
	B.takeDamage(D.getDamages());
	E.beRepaired(1);
	std::cout << std::endl;
	B.attack("A");
	A.takeDamage(B.getDamages());
	C.beRepaired(10);

	std::cout << "\n\nA: name = " << A.getName() << " | hp = " << A.getHp() << " | EP = " << A.getEnergyPoints() << std::endl;
	std::cout << "B: name = " << B.getName() << " | hp = " << B.getHp() << " | EP = " << B.getEnergyPoints() << std::endl;
	std::cout << "C: name = " << C.getName() << " | hp = " << C.getHp() << " | EP = " << C.getEnergyPoints() << "\n\n" << std::endl;

	std::cout << "\n\nD: name = " << D.getName() << " | hp = " << D.getHp() << " | EP = " << D.getEnergyPoints() << std::endl;
	std::cout << "E: name = " << E.getName() << " | hp = " << E.getHp() << " | EP = " << E.getEnergyPoints() << std::endl;
	std::cout << "F: name = " << F.getName() << " | hp = " << F.getHp() << " | EP = " << F.getEnergyPoints() << "\n\n" << std::endl;

	return 0;
}