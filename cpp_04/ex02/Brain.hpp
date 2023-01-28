/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:22:58 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/12 12:50:22 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &toCopy);
		~Brain(void);
		Brain &operator=(const Brain &toAffect);

		std::string	getIdea(int n) const;
		void		setIdea(std::string idea);

	private:
		std::string	_ideas[100];
};

#endif