/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:16 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/28 12:36:20 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(const Dog &toCopy);
		virtual ~Dog(void);
		Dog &operator=(const Dog &toAffect);

		virtual void		makeSound(void) const;
		Brain				*getBrain(void) const;

	private:
		Brain	*_brain;
};

#endif