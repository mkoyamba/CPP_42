/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:43:08 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 14:07:46 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	input(int ac, char **arg, std::list<int> &_list, std::deque<int> &_deque)
{
	std::string			word;
	std::stringstream	ss;
	long	l;
	char	*endptr = NULL;

	for (int i = 1; i < ac; i++)
		ss << arg[i] << " ";
	while (ss >> word) {
		endptr = NULL;
		l = strtol(word.c_str(), &endptr, 10);
		if (*endptr == '\0' && l >= 0 && l <= INT_MAX) {
			_list.push_back(l);
			_deque.push_back(l);
		}
		else {
			std::cout << word <<  " ";
			return (false);
		}
	}
	return(true);
}