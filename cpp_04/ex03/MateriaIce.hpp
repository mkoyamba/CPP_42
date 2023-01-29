/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:23:45 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/29 13:20:31 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIAICE_HPP
# define MATERIAICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class MateriaIce : public AMateria {
	public:
		MateriaIce(void);
		MateriaIce(std::string const & type);
		MateriaIce(const MateriaIce &toCopy);
		~MateriaIce(void);
		MateriaIce &operator=(const MateriaIce &toAffect);

		virtual std::string const & getType() const;
		virtual MateriaIce* clone() const;
		virtual void use(ICharacter& target);
};

#endif