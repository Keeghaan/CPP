/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:59:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 17:41:53 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdio>

Fixed	area(const Point a, const Point b, const Point c)
{
	float	area;

	area = 0.5 * (a.getX().toFloat() * ((b.getY().toFloat()) - c.getY().toFloat()) +
			b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
			c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	Fixed	result(std::abs(area));
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	bigArea;
	Fixed	area1;
	Fixed	area2;
	Fixed	area3;

	bigArea = area(a, b, c);
	area1 = area(point, b, c);
	area2 = area(a, point, c);
	area3 = area(a, b, point);
	if (DEBUG)
	{
		std::cout << "bigArea = " << bigArea << std::endl;
		std::cout << "area1 = " << area1 << std::endl;
		std::cout << "area2 = " << area2 << std::endl;
		std::cout << "area3 = " << area3 << std::endl;
		std::cout << "a1 + a2 + a3 = " << area1 + area2 + area3 << std::endl;
	}
	if (!area1.getRawBits() || !area2.getRawBits() || !area3.getRawBits())
		return (false);
	if (area1 + area2 + area3 > bigArea)
		return (false);
	return (true);
}
