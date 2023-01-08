/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:23 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 15:36:53 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	A("Hello");
	ClapTrap	B("World");
	ClapTrap	C(B);
	ScavTrap	D("Salut");
	ScavTrap	E("Monde");
	ScavTrap	F(E);
	FragTrap	G("Buongiorno");
	FragTrap	H("Mondo");
	FragTrap	I(G);
	DiamondTrap	K;
	DiamondTrap	L("HolaMundo");
	DiamondTrap	M(K);

	std::cout << "\n\n" << std::endl;
	G.attack("E");
	E.takeDamage(G.getDamages());
	E.beRepaired(1);
	std::cout << std::endl;
	D.attack("B");
	B.takeDamage(D.getDamages());
	E.beRepaired(1);
	std::cout << std::endl;
	B.attack("A");
	A.takeDamage(B.getDamages());
	C.beRepaired(10);
	std::cout << std::endl;
	K.whoAmI();
	L.whoAmI();

	std::cout << "\n\nA: name = " << A.getName() << " | hp = " << A.getHp() << " | EP = " << A.getEnergyPoints() << std::endl;
	std::cout << "B: name = " << B.getName() << " | hp = " << B.getHp() << " | EP = " << B.getEnergyPoints() << std::endl;
	std::cout << "C: name = " << C.getName() << " | hp = " << C.getHp() << " | EP = " << C.getEnergyPoints() << std::endl;
	std::cout << "D: name = " << D.getName() << " | hp = " << D.getHp() << " | EP = " << D.getEnergyPoints() << std::endl;
	std::cout << "E: name = " << E.getName() << " | hp = " << E.getHp() << " | EP = " << E.getEnergyPoints() << std::endl;
	std::cout << "F: name = " << F.getName() << " | hp = " << F.getHp() << " | EP = " << F.getEnergyPoints() << std::endl;
	std::cout << "G: name = " << G.getName() << " | hp = " << G.getHp() << " | EP = " << G.getEnergyPoints() << std::endl;
	std::cout << "H: name = " << H.getName() << " | hp = " << H.getHp() << " | EP = " << H.getEnergyPoints() << std::endl;
	std::cout << "I: name = " << I.getName() << " | hp = " << I.getHp() << " | EP = " << I.getEnergyPoints() << "\n\n" << std::endl;

	return 0;
}