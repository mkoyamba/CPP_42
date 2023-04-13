/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:16:43 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/12 12:34:54 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Need only 1 argument" << std::endl;
		return 1;
	}
	std::string	litteral(argv[1]);
	convert(litteral);
	return 0;
}