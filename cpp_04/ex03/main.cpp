/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:18 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/03 11:27:22 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include <stdlib.h>

int	main(void)
{
	AMateria	*materiaA = new MateriaIce;
	AMateria	*materiaB = new MateriaCure;
	//AMateria	materiaC;

	Character	cara1("Marco");
	Character	cara2("Polo");

	MateriaSource	Source;

	Source.learnMateria(materiaA);
	Source.learnMateria(materiaB);
	AMateria	*materiaC = Source.createMateria("cure");

	std::cout << materiaA->getType() << std::endl;
	std::cout << materiaB->getType() << std::endl;
	std::cout << materiaC->getType() << std::endl;

	cara2.equip(materiaB);
	cara1.equip(materiaA);
	cara1.equip(materiaB);

	Character	cara3(cara1);

	cara2.use(0, cara1);
	cara1.use(1, cara2);
	cara1.use(0, cara2);

	cara1.unequip(0);

	cara1.use(0, cara2);
	cara3.use(0, cara2);

	delete	materiaA;
	delete	materiaB;

	return (0);
}