/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:17:57 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/23 11:34:50 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>

class Convert{

	public:

		Convert(const std::string& param);
		Convert(const Convert& from);
		~Convert();

		Convert& operator=(const Convert& from);

		void	convert();
		char	convertChar();
		int		convertInt();
		float	convertFloat();
		double	convertDouble();

	private:

		std::string _param;

};

#endif