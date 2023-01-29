/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:18 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/29 13:24:23 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaIce.hpp"
#include "MateriaCure.hpp"

int	main(void)
{
	MateriaCure	materiaA;

	std::cout << materiaA.getType() << std::endl;
	//system("leaks Interface");
	return (0);
}