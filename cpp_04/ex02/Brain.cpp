/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:25:31 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/03 10:50:13 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy) {	*this = toCopy; }

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &toAffect) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toAffect.getIdea(i + 1);
	return *this;
}

std::string	Brain::getIdea(int n) const { return this->_ideas[n]; }

void	Brain::setIdea(std::string idea) {
	for (int i = 99; i > 0; i--)
		this->_ideas[i] = this->_ideas[i - 1];
	this->_ideas[0] = idea;
}