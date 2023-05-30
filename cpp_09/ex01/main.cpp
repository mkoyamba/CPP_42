/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:24:51 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 09:25:26 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: Invalid argument" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
	RPN calculator;
	calculator.calculate(arg);
	return 0;
}