/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:12 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 19:51:47 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal {
	public:
		Cat(void);
		Cat(const Cat &toCopy);
		~Cat(void);
		Cat &operator=(const Cat &toAffect);

		virtual void		makeSound(void) const;
};

#endif