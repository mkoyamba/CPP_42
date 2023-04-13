/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:45:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 12:03:57 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	int array[] = {1, 2, 3, 4};
	std::string str = "Hello, World!";

	::iter<int>(array, 4, show);
	::iter<const char>(str.c_str(), str.length(), show);
	return 0;
}