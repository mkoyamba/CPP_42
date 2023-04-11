/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:27:06 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/11 17:14:14 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class	Form;

class	PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &toAffect);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif