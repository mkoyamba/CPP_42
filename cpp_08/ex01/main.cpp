/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:46:53 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/26 10:55:53 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "======= SUJET =======" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest : "<< sp.shortestSpan() << std::endl;
	std::cout << "longest : " << sp.longestSpan() << '\n' << std::endl;
	
	std::cout << "======= SORTED =======" << std::endl;
	Span big = Span(100);
	for (int i = 1; i <= 100; i++)
		big.addNumber(i);
	std::cout << "shortest : " << big.shortestSpan() << std::endl;
	std::cout << "longest :" << big.longestSpan() << '\n' << std::endl;


	std::cout << "======= RANDOM =======" << std::endl;
	Span superbig = Span(10000);
	superbig.addMultNumber(10000);
	std::cout << "shortest : " << superbig.shortestSpan() << std::endl;
	std::cout << "longest :" << superbig.longestSpan() << '\n'<< std::endl;
	
	std::cout << "======= EXCEPTIONS =======" << std::endl;
	try {
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.addNumber(5);
		Exception.addNumber(15);
	} catch(const std::exception& e) {
		std::cerr << "too much numbers (addNumber)   : " << e.what() << '\n';
	}


	try {
		Span Exception = Span(100);
		Exception.addMultNumber(101);
	} catch(const std::exception& e) {
		std::cerr << "too much numbers (addMultNumber) : " << e.what() << '\n';
	}


	try {
		Span Exception = Span(2);
		Exception.shortestSpan();
	} catch(const std::exception& e) {
		std::cerr << "shortest with 0 number : " << e.what() << '\n';
	}


	try {
		Span Exception = Span(2);
		Exception.longestSpan();
	} catch(const std::exception& e) {
		std::cerr << "longest with 0 number : " << e.what() << '\n';
	}

	return 0;
}