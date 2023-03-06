/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:01:22 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/02/15 13:36:19 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "MateriaIce.hpp"
# include "MateriaCure.hpp"

class Character : public ICharacter {
	public:
		Character(void);
		Character(std::string const & name);
		Character(const Character &toCopy);
		~Character(void);
		Character	&operator=(const Character &toAffect);

		virtual std::string	const &	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		AMateria					*getMateria(int idx) const;
		AMateria					*getTrash(int idx) const;

	private:
		std::string	_name;
		AMateria	*_trash[10000];
		AMateria	*_inventory[4];
};

#endif
