/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:58 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 14:20:54 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &toCopy);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &toAffect);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName(void);
		int	getHp(void);
		int	getEnergyPoints(void);
		int	getDamages(void);

	private:
		std::string	_name;
		int			_hp;
		int			_energyPoints;
		int			_damages;
};

#endif