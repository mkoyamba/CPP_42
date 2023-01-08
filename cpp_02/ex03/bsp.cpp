/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:30:14 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 12:54:54 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

static float	ft_abs(float n)
{
	if (n < 0)
		return -n;
	return n;
}

static float	area(Point a, Point b, Point c)
{
	return ft_abs((a.getX().toFloat()
					* (b.getY().toFloat() - c.getY().toFloat())
					+ b.getX().toFloat()
					* (c.getY().toFloat() - a.getY().toFloat())
					+ c.getX().toFloat()
					* (a.getY().toFloat() - b.getY().toFloat())) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area (a, b, c);
	float A1 = area (point, b, c);
	float A2 = area (a, point, c);
	float A3 = area (a, b, point);

	return (A == A1 + A2 + A3);
}