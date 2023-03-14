/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:15:35 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/03/14 12:46:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &toCopy) : _x(toCopy._x), _y(toCopy._y) {}

Point::~Point(void) {}

Point	&Point::operator=(const Point &toAffect) {
	(void) toAffect;
	return *this;
}

Fixed Point::getX(void) {return this->_x;}

Fixed Point::getY(void) {return this->_y;}