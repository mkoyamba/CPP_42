/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:18 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 20:07:38 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Cat			chat;
	Dog			chien;
	Animal		unknown;
	WrongAnimal	aniiiimal;
	WrongCat	caaaaat;

	unknown.makeSound();
	chat.makeSound();
	chien.makeSound();
	aniiiimal.makeSound();
	caaaaat.makeSound();

	std::cout << unknown.getType()
				<< chat.getType()
				<< ' ' << chien.getType()
				<< aniiiimal.getType()
				<< ' ' << caaaaat.getType()
				<< std::endl;
	return 0;
}