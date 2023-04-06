/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:50:01 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/06 18:30:55 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default") {
	std::cout << "Form default constructor called." << std::endl;
	this->_signed = 0;
	this->_gradeSign = 150;
	this->_gradeExec = 150;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name) {
	std::cout << "Form constructor called." << std::endl;
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	this->_signed = 0;
	this->_gradeSign = gradeSign;
	this->_gradeExec = gradeExec;
}

Form::Form(const Form &toCopy) {
	std::cout << "Form copy constructor called." << std::endl;
	*this = toCopy;
}

Form::~Form(void) {
	std::cout << "Form destructor called." << std::endl;
}

Form &Form::operator=(const Form &toAffect) {
	this->_signed = toAffect._signed;
	this->_gradeSign = toAffect._gradeSign;
	this->_gradeExec = toAffect._gradeExec;
	return *this;
}

const std::string Form::getName(void) const {
	return this->_name;
}

int		Form::getGradeSign(void) const {
	return this->_gradeSign;
}

int		Form::getGradeExec(void) const {
	return this->_gradeExec;
}

void	Form::beSigned(Bureaucrat &signer) {
	if (this->_signed == 1)
		throw FormSignedException();
	else if (signer.getGrade() <= this->_gradeSign)
		this->_signed = 1;
	else
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & input) {
	o << "Form " << input.getName()
		<< ", grade to sign : " << input.getGradeSign()
		<< ", grade to execute : " << input.getGradeExec();
	return (o);
}
