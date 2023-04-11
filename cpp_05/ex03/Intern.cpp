/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:23:08 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 18:38:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Intern constructor called." << std::endl;
}

Intern::Intern(const Intern &toCopy) {
	std::cout << "Intern copy constructor called." << std::endl;
	*this = toCopy;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &toAffect) {
	(void)toAffect;
	return *this;
}

Form	*Intern::makeForm(const std::string &name, const std::string &target) const {
	Form	*result = NULL;
	std::string	forms[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	int	i = 0;

	while (i < 3 && forms[i].compare(name))
		i++;
	switch(i) {
		case 0:
			result = new ShrubberyCreationForm(target);
			break ;
		case 1:
			result = new PresidentialPardonForm(target);
			break ;
		case 2:
			result = new RobotomyRequestForm(target);
			break ;
		default:
			throw NoFormException();
			break ;
	}
	std::cout << "Intern creates " << name << " form." << std::endl;
	return result;
}