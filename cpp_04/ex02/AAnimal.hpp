/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:07 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/02/28 12:13:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &toCopy);
		virtual ~AAnimal(void);
		AAnimal &operator=(const AAnimal &toAffect);

		virtual void		makeSound(void) const = 0;
		const std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif