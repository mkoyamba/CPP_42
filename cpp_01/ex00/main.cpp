/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:48:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 18:33:57 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	un("one");
	Zombie	*deux = newZombie("two");
	randomChump("three");
	un.announce();
	deux->announce();
	delete deux;
	return (0);
}