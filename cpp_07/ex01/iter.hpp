/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:54:27 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 12:02:40 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<class T> void	show(T &a) {
	std::cout << a << std::endl;
}

template<class T> void	iter(T *ptr, size_t size, void(*ft)(T& elem)) {
	for (size_t i = 0; i < size; i++)
		ft(ptr[i]);
}

#endif