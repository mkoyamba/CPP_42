/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:07 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/28 12:34:44 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &toCopy);
		virtual ~AAnimal(void) = 0;
		AAnimal &operator=(const AAnimal &toAffect);

		virtual void		makeSound(void) const;
		const std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif