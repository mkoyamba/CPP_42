/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:44:47 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/26 10:46:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {

	public:

		Span(unsigned int size);
		Span(const Span& from);
		~Span();
		Span& operator=(const Span& from);

		void	addNumber(int number);
		void	addMultNumber(int quantity);
		int		longestSpan() const;
		int		shortestSpan() const;
	
	private:
	
		unsigned int		_size;
		std::vector<int>	_vector;
};

#endif