/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:43:06 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 10:43:00 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cerr << "Usage ./PmergeMe 'positive integer sequence'" << std::endl;
		return(EXIT_FAILURE);
	}
	std::list<int>		_list;
	std::deque<int>		_deque;
	if (input(argc, argv, _list, _deque) == false) {
		std::cerr << "parameter must be a positive integer value" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << "Before: ";
 	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::clock_t start_time = std::clock();
	mergeInsertsort(_list);
	std::clock_t end_time = std::clock();
	std::cout << "After: ";
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	double res_time = static_cast<double>(end_time - start_time) / (double)CLOCKS_PER_SEC *  1000000;
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list<int> : " << res_time << " us" << std::endl;
	start_time = std::clock();
	mergeInsertsort(_deque);
	end_time = std::clock();
	res_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque<int> : " << res_time << " us" << std::endl;
	return 0;
}