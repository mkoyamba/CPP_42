/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:15:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 12:40:42 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &toCopy);
		~Point(void);
		Point &operator=(const Point &toAffect);

		Fixed getX();
		Fixed getY();
		
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif