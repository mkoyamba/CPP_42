/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:44:49 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/26 10:46:01 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span& from) {
	*this = from;
}

Span::~Span(void) {}

Span& Span::operator=(const Span& from) {
	(void)from;
	return *this;
}

void	Span::addNumber(int number) {
	if (this->_vector.size() >= this->_size)
		throw std::exception();
	this->_vector.push_back(number);
}

void	Span::addMultNumber(int quantity) {
	if ((this->_vector.size() + quantity - 1) >= this->_size)
		throw std::exception();
	int random;
	srand(time(NULL));
	for (int i = 0; i < quantity; i++)
	{
		random = rand() % RAND_MAX + 1;
		this->_vector.push_back(random);
	}
}

int	Span::longestSpan() const {
	if (this->_vector.size() < 2)
		throw std::exception();
	int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	return max - min;
}

int	Span::shortestSpan() const {
	if (this->_vector.size() < 2)
		throw std::exception();
	std::vector<int> vector(this->_vector);
	std::sort(vector.begin(), vector.end());
	int shortest = vector[1] - vector[0];
	for (size_t i = 2; i < vector.size(); i++)
	{
		if (vector[i] - vector[i - 1] < shortest)
			shortest = vector[i] - vector[i - 1];
	}
	return shortest;
}