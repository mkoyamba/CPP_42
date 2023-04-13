/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:22:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 10:45:56 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

float toFloat(std::string &litteral) {
	return atof(litteral.c_str());
}

char toChar(std::string &litteral) {
	return static_cast<char>(toFloat(litteral));
}

int toInt(std::string &litteral) {
	return static_cast<int>(toFloat(litteral));
}

double toDouble(std::string &litteral) {
	return static_cast<double>(toFloat(litteral));
}

void	convert(std::string &litteral) {
	char c = toChar(litteral);
	int i = toInt(litteral);
	float f = toFloat(litteral);
	double d = toDouble(litteral);

	if (f < -128 || f > 127 || isnan(f)) {
		std::cout << "char: impossible" << std::endl;
	} else if (c > 32 && c < 127) {
		std::cout << "char: '" << c << "'" << std::endl;
	} else {
		std::cout << "char: non displayable" << std::endl;
	}

	if (i < INT_MIN || i > INT_MAX || isnan(f)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << i << std::endl;
	}

	if (f - i == 0) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}