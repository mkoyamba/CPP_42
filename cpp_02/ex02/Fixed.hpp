/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:58 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 12:11:45 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &toCopy);
		~Fixed(void);
		Fixed &operator=(const Fixed &toAffect);
		bool operator>(const Fixed &toAffect) const;
		bool operator<(const Fixed &toAffect) const;
		bool operator>=(const Fixed &toAffect) const;
		bool operator<=(const Fixed &toAffect) const;
		bool operator==(const Fixed &toAffect) const;
		bool operator!=(const Fixed &toAffect) const;
		Fixed operator+(const Fixed &toAffect);
		Fixed operator-(const Fixed &toAffect);
		Fixed operator*(const Fixed &toAffect);
		Fixed operator/(const Fixed &toAffect);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif