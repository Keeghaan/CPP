/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:59:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 16:03:10 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(const Point a, const Point b, const Point c)
{
	Point	tmp(0.5, 1.5);
	Fixed	result;

	result = (tmp.getX() * (b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY()));
	return (result.toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	std::cout << area(a, b, point) + area(b, c, point) + area(a, c, point) << std::endl;
	if (area(a, b, point) + area(b, c, point) + area(a, c, point) == 0)
		return (false);
	if (area(a, b, point) + area(b , c, point)  + area(a, c, point) > 0)
		return (false);
	
	return (true);
}
