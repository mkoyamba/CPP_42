/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:55:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/10/29 21:02:27 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	char c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int n = 1; n < argc; n++)
			for (int i = 0; i < strlen(argv[n]); i++)
			{
				c = toupper(argv[n][i]);
				std::cout << c;
			}
		std::cout << std::endl;
	}
	return (0);
}
