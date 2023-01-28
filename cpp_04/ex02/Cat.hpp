/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:12 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/28 12:36:15 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(const Cat &toCopy);
		virtual ~Cat(void);
		Cat &operator=(const Cat &toAffect);

		virtual void		makeSound(void) const;
		Brain				*getBrain(void) const;

	private:
		Brain	*_brain;
};

#endif