/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:22:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/23 11:34:46 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const std::string& param) : _param(param)
{
}

Convert::Convert(const Convert& from)
{
	*this = from;
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert& from)
{
	(void) from;
	return *this;
}

void	Convert::convert()
{
	const char	c_param = convertChar();
	const int	i_param = convertInt();
	const float	f_param = convertFloat();
	const double	d_param = convertDouble();

	if (f_param < CHAR_MIN || f_param > CHAR_MAX || isnan(f_param))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(c_param))
		std::cout << "char: '" << c_param << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (i_param < INT_MIN || i_param > INT_MAX || isnan(f_param))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i_param << std::endl;
	if (f_param - i_param == 0)
	{
		std::cout << "float: " << f_param << ".0f" << std::endl;
		std::cout << "double: " << d_param << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f_param << "f" << std::endl;
		std::cout << "double: " << d_param << std::endl;
	}
}

char	Convert::convertChar()
{
	return static_cast<char>(convertFloat());
}


int	Convert::convertInt()
{
	return static_cast<int>(convertFloat());
}


float	Convert::convertFloat()
{
 return atof(this->_param.c_str());
}


double	Convert::convertDouble()
{
	return static_cast<double>(convertFloat());
}