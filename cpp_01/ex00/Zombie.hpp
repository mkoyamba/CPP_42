/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:49:16 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/06 18:21:21 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);

	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
