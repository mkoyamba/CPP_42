/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:55:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/25 13:01:29 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int n = 1; n < argc; n++)
			for (size_t i = 0; i < strlen(argv[n]); i++)
				std::cout << (char)toupper(argv[n][i]);
	std::cout << std::endl;
	return (0);
}
