/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:07 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:57:59 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &toCopy);
		~Animal(void);
		Animal &operator=(const Animal &toAffect);

		virtual void		makeSound(void) const;
		const std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif