/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:48:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/07 12:53:44 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	karen;
	if (argc != 2)
	{
		std::cout << "Use: ./harlFilter [COMPLAINT]\n\n[COMPLAINT] may be DEBUG, INFO, WARNING or ERROR" << std::endl;
		return 1;
	}
	karen.complain(argv[1]);
	return 0;
}