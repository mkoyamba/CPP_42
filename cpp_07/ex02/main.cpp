/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:07:50 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 13:02:23 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void) {
	Array<int> numbers(50);
	int* mirror = new int[50];
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	//mirror[3] = 0;
	for (int i = 0; i < 50; i++) {
		std::cout << mirror[i] << " " << numbers[i];
		if (mirror[i] != numbers[i]) {
			delete [] mirror;
			std::cerr << "\ndidn't save the same value!!" << std::endl;
			return 1;
		}
		else
			std::cout << " -> good" << std::endl;
	}
	try {
		numbers[-2] = 0;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[50] = 0;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 50; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}