/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:27:12 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:12:53 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45, "default") {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequest", 72, 45, target) {
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy) {
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = toCopy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toAffect) {
	this->Form::operator=(toAffect);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int	ran;

	if (!this->_signed)
		throw FormNotSignedException();
	else if (executor.getGrade() > 45)
		throw GradeTooLowException();
	else {
		std::srand(std::time(NULL));
		std::cout << "BZZZZZZZZ VROUUUUM BZZZZZZZ" << std::endl;
		ran = std::rand();
		if (ran%2 == 0)
			std::cout << this->_target << " is now a robot." << std::endl;
		else
			std::cout << "Operation failed." << std::endl;
	}
}