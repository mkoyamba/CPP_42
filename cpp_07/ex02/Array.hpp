/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:07:48 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 12:57:37 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T> class Array {
	public:
		Array(void) : _size(0) {
			_tab = NULL;
		}
		Array(unsigned int n) : _size(n) {
			_tab = new T[n];
			for (unsigned int i = 0; i < n; i++)
				_tab[i] = 0;
		}
		Array(Array &toCopy) {
			*this = toCopy;
		}
		Array &operator=(const Array &toAffect) {
			if (!_size)
				delete [] _tab;
			_size = toAffect.size();
			_tab = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_tab[i] = toAffect[i];
			return *this;
		}
		T &operator[](unsigned int index) const {
			if (index > _size - 1)
				throw Overflow();
			return _tab[index];
		}

		unsigned int	size(void) const {
			return _size;
		}

		class Overflow : public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("Array::Overflow");
				}
		};
	
	private:
		T				*_tab;
		unsigned int	_size;
};

#endif