/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:48:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 19:15:41 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// 3 zombies
	int	number = 3;
	Zombie	*horde = zombieHorde(number, "test");
	for (int i = 0; i < number; i++)
		horde[i].announce();
	delete [] horde;

	//19 zombies
	number = 19;
	horde = zombieHorde(number, "shifumi");
	for (int i = 0; i < number; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}