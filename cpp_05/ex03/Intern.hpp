/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:23:07 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 18:35:34 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <iostream>

class	Intern {
	public:
		Intern(void);
		Intern(const Intern &toCopy);
		~Intern(void);
		Intern &operator=(const Intern &toAffect);

		Form	*makeForm(const std::string &name, const std::string &target) const;

		class NoFormException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Intern::NoFormException");
				}
		};
};

#endif