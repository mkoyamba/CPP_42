/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:50:21 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:14:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
	public:
		Form(void);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(std::string name, int gradeSign, int gradeExec, std::string target);
		Form(const Form &toCopy);
		~Form(void);
		Form &operator=(const Form &toAffect);

		const std::string	getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;

		void	beSigned(Bureaucrat &signer);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::GradeTooHighException");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::GradeTooLowException");
				}
		};
		class FormSignedException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::FormSignedException");
				}
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Form::FormNotSignedException");
				}
		};
	
		virtual void	execute(Bureaucrat const & executor) const = 0;

	protected:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		int					_gradeSign;
		int					_gradeExec;
};

std::ostream & operator<<(std::ostream & o, Form const & input);

#endif