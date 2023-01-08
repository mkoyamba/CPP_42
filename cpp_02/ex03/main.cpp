/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:58:23 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/08 12:56:08 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point a1(0, 0);
	Point b1(10, 30);
	Point c1(20, 0);
	Point point1(10, 15);
	std::cout << "Is in  : " << bsp(a1, b1, c1, point1) << std::endl;

	Point a2(0, 0);
	Point b2(10, 30);
	Point c2(20, 0);
	Point point2(30, 15);
	std::cout << "Is out : " << bsp(a2, b2, c2, point2) << std::endl;

	Point a3(0, 0);
	Point b3(10, 30);
	Point c3(20, 0);
	Point point3(0, 15);
	std::cout << "Is on  : " << bsp(a3, b3, c3, point3) << std::endl;
}