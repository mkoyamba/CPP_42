/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:48:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 19:39:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}