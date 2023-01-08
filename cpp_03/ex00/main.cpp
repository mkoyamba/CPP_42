/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:23 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 13:49:10 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap	A("Hello");
	ClapTrap	B("World");
	ClapTrap	C(B);

	A.attack("B");
	B.takeDamage(A.getDamages());
	C.beRepaired(10);

	std::cout << "\n\nA: name = " << A.getName() << " | hp = " << A.getHp() << " | EP = " << A.getEnergyPoints() << std::endl;
	std::cout << "B: name = " << B.getName() << " | hp = " << B.getHp() << " | EP = " << B.getEnergyPoints() << std::endl;
	std::cout << "C: name = " << C.getName() << " | hp = " << C.getHp() << " | EP = " << C.getEnergyPoints() << "\n\n" << std::endl;

	return 0;
}