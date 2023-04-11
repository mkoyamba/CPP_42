/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:27:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 18:41:11 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5, "default") {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardon", 25, 5, target) {
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy) {
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = toCopy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toAffect) {
	this->Form::operator=(toAffect);
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->_signed)
		throw FormNotSignedException();
	else if (executor.getGrade() > 5)
		throw GradeTooLowException();
	else
		std::cout << this->_target << " as been pardonned by Zaphod Beeblebrox." << std::endl;
}