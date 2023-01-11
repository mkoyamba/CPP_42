/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:16 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:46:02 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : virtual public Animal {
	public:
		Dog(void);
		Dog(const Dog &toCopy);
		~Dog(void);
		Dog &operator=(const Dog &toAffect);

		virtual void		makeSound(void) const;
};

#endif