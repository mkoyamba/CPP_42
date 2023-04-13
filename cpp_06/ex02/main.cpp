/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:28:54 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 11:34:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	randomiser(void) {

	srand(time(NULL));
	switch(rand()%3) {
		case 0:
			std::cout << "Type A created." << std::endl;
			return new A;
		case 1:
			std::cout << "Type B created." << std::endl;
			return new B;
		case 2:
			std::cout << "Type C created." << std::endl;
			return new C;
	}
	return (0);
}

void	identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type is C" << std::endl;
	else
		std::cout << "Not A, B or C" << std::endl;
}

void	identify(Base& p) {
	try {
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Type is A" << std::endl;

	} catch (std::exception& exception) {
		try {
			B& b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Type is B" << std::endl;

		} catch (std::exception& exception) {
			try {
				C& c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Type is C" << std::endl;

			} catch (std::exception& exception) {
				std::cout << "Not A, B or C" << std::endl;
			}
		}
	}
}

int	main(void) {
	Base* base = randomiser();
	identify(*base);
	identify(base);
	delete base;
}