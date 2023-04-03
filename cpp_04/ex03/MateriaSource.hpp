/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:58:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/03 11:10:32 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &toCopy);
		~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &toAffect);

		virtual void		learnMateria(AMateria* materia);
		virtual AMateria*	createMateria(std::string const & type);
		AMateria			*getMateria(int idx) const;
	
	private:
		AMateria	*_inventory[4];
};

#endif