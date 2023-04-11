/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:18:34 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:18:54 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &toCopy);
		~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &toAffect);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);

		void	signForm(Form &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Bureaucrat::GradeTooHighException");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Bureaucrat::GradeTooLowException");
				}
		};

		void	executeForm(Form const & form);
		
	private:
		std::string	_name;
		int			_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & input);

#endif