/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:45:37 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 11:52:30 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<class T> void	swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T> T	&min(T &a, T &b) {
	if (a < b)
		return a;
	return b;
}

template<class T> T	&max(T &a, T &b) {
	if (a > b)
		return a;
	return b;
}

#endif