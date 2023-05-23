/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:16:43 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/23 11:35:38 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert value(argv[1]);
		value.convert();
	}
	else
		std::cout << "Wrong synthax !" << std::endl;
	return 0;
}