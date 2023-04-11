/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:27:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:28:39 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137, "default") {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreation", 145, 137, target) {
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) {
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = toCopy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toAffect) {
	this->Form::operator=(toAffect);
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->_signed)
		throw FormNotSignedException();
	else if (executor.getGrade() > 137)
		throw GradeTooLowException();
	else {
		std::ofstream ofs(this->_target + ("_shrubbery"));
		if (!ofs.is_open())
			throw std::ofstream::failure(strerror(errno));
		ofs << "       ,,,." << std::endl;
		ofs << "    ,&%%&%&&%," << std::endl;
		ofs << "   ,%&\\%&&%&&%," << std::endl;
		ofs << "   %&&%&%&/%&&%" << std::endl;
		ofs << "   %&&%/ %&\\%%" << std::endl;
		ofs << "   `&%\\ ` /%&'" << std::endl;
		ofs << "       |o|" << std::endl;
		ofs << "       |.|" << std::endl;
		ofs << "     \\/ ._\\/\n" << std::endl;
		ofs << "       ,,,." << std::endl;
		ofs << "    ,&%%&%&&%," << std::endl;
		ofs << "   ,%&\\%&&%&&%," << std::endl;
		ofs << "   %&&%&%&/%&&%" << std::endl;
		ofs << "   %&&%/ %&\\%%" << std::endl;
		ofs << "   `&%\\ ` /%&'" << std::endl;
		ofs << "       |o|" << std::endl;
		ofs << "       |.|" << std::endl;
		ofs << "     \\/ ._\\/\n" << std::endl;
		ofs << "       ,,,." << std::endl;
		ofs << "    ,&%%&%&&%," << std::endl;
		ofs << "   ,%&\\%&&%&&%," << std::endl;
		ofs << "   %&&%&%&/%&&%" << std::endl;
		ofs << "   %&&%/ %&\\%%" << std::endl;
		ofs << "   `&%\\ ` /%&'" << std::endl;
		ofs << "       |o|" << std::endl;
		ofs << "       |.|" << std::endl;
		ofs << "     \\/ ._\\/" << std::endl;
	}
}