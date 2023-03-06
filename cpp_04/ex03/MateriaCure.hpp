/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:33:31 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/02/15 13:18:17 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIACURE_HPP
# define MATERIACURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class MateriaCure : public AMateria {
	public:
		MateriaCure(void);
		MateriaCure(std::string const & type);
		MateriaCure(const MateriaCure &toCopy);
		virtual ~MateriaCure(void);
		MateriaCure &operator=(const MateriaCure &toAffect);

		virtual std::string const & getType() const;
		virtual MateriaCure* clone() const;
		virtual void use(ICharacter& target);
};

#endif