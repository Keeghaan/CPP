/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:59:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 14:32:52 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(const Point a, const Point b, const Point c)
{
	return (0.5 * float((b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	std::cout << area(a, b, point) << std::endl << area(b, c, point) << std::endl << area(a, c, point) << std::endl;
	if (!area(a, b, point) || !area(b, c, point) || !area(a, c, point))
		return (false);

	return (true);
}
