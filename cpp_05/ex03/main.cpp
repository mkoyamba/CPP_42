/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:18:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 18:39:30 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat bureaucrat("bureaucrat", 1);

	std::cout << "\n============= Presidential Pardon ============\n" << std::endl;

	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Antoine");
	bureaucrat.signForm(*ppf);
	bureaucrat.executeForm(*ppf);

	std::cout << "\n=============== Robotomy Request =============\n" << std::endl;

	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	bureaucrat.signForm(*rrf);
	bureaucrat.executeForm(*rrf);

	std::cout << "\n============== Shubbery Creation =============\n" << std::endl;

	Form* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	bureaucrat.signForm(*scf);
	bureaucrat.executeForm(*scf);

	std::cout << "\n============= testing exceptions =============\n" << std::endl;

	Form* tf;
	try { 
		tf = someRandomIntern.makeForm("test", "test"); 
		(void)tf;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	
	std::cout << "\n==============================================\n" << std::endl;
}