/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:18:10 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:25:27 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	std::cout << "\n============= Presidential Pardon ============\n" << std::endl;

	Bureaucrat bureaucrat1("bureaucrat1", 1);
	PresidentialPardonForm pardonform("Yoshi");
	std::cout << pardonform << std::endl;
	bureaucrat1.signForm(pardonform);
	bureaucrat1.executeForm(pardonform);

	std::cout << "\n=============== Robotomy Request =============\n" << std::endl;

	Bureaucrat bureaucrat2("bureaucrat2", 1);
	RobotomyRequestForm robotomyrequest("Bob");
	std::cout << robotomyrequest << std::endl;
	bureaucrat2.signForm(robotomyrequest);
	bureaucrat2.executeForm(robotomyrequest);

	std::cout << "\n============== Shubbery Creation =============\n" << std::endl;

	Bureaucrat bureaucrat3("bureaucrat3", 1);
	ShrubberyCreationForm shrubberycreation("garden");
	std::cout << shrubberycreation << std::endl;
	bureaucrat3.signForm(shrubberycreation);
	bureaucrat3.executeForm(shrubberycreation);


	std::cout << "\n============= testing exceptions =============\n" << std::endl;
	
	Bureaucrat toolow("toolow", 150);
	Bureaucrat ok("ok", 1);

	PresidentialPardonForm pardon("test");
	RobotomyRequestForm robotomy("test");
	ShrubberyCreationForm shrubbery("test");

	try { toolow.signForm(pardon); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { toolow.signForm(robotomy); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { toolow.signForm(shrubbery); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	pardon.beSigned(ok);
	robotomy.beSigned(ok);
	shrubbery.beSigned(ok);

	try { toolow.executeForm(pardon); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { toolow.executeForm(robotomy); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }

	try { toolow.executeForm(shrubbery); }
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
	
	std::cout << "\n==============================================\n" << std::endl;
}