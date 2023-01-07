/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:53:00 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/07 12:02:32 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif