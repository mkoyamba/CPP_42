/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:24 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 20:01:22 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &toCopy);
		~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &toAffect);

		virtual void		makeSound(void) const;
		const std::string	getType(void) const;

	protected:
		std::string	type;
};

#endif