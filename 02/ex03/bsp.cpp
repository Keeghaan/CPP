/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:59:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 17:22:00 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdio>

bool	is_neg(const Point a, const Point b, const Point c)
{
	if (a.getX() < 0 || a.getY() < 0 || b.getX() < 0 ||  b.getY() < 0
		|| c.getX() < 0 || c.getY() < 0)
		return (true);
	return (false);
}

Fixed	area(const Point a, const Point b, const Point c)
{
	Point	tmp(0.5, 1.5);
	Fixed	result;

	if (!is_neg(a, b, c))
		result = (tmp.getX() * (b.getX() - a.getX()) * (c.getY() - a.getY()) -
			(c.getX() - a.getX()) * (b.getY() - a.getY()));
	else
	{
		result = a.getX() * (b.getY() - c.getY()) +  b.getX() *
			(a.getY() - c.getY()) + c.getX() * (b.getY() - c.getY());
		std::abs(result.toFloat());
	}
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	std::cout << area(a, b, c) << std::endl;
	std::cout << area(a, b, point) << std::endl;
	std::cout << area(b, c, point) << std::endl;
	std::cout << area(a, c, point) << std::endl;
	std::cout << area(a, b, point) + area(b, c, point) + area(a, c, point) << std::endl;

	if ((area(a, b, point) + area(b, c, point) + area(a, c, point)) > 0)//> area(a, b, c))
		return (printf("ici\n"), false);
	if (area(a, b, point) == 0 || area(b, c, point) == 0
		|| area(a, c, point) == 0)
		return (printf("la\n"), false);
	return (true);
}
