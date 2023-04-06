/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:18:12 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/06 17:56:08 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Bureaucrat default constructor called." << std::endl;
	this->_name = "default";
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) {
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = toCopy;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toAffect) {
	this->_name = toAffect._name;
	this->_grade = toAffect._grade;
	return *this;
}

const std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int		Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::upGrade(void) {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downGrade(void) {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & input) {
	o << input.getName() << ", bureaucrat grade " << input.getGrade();
	return (o);
}
