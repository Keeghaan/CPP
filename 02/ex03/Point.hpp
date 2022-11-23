/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:54:25 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 14:05:01 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

# define DEBUG 1

//bool bsp( Point const a, Point const b, Point const c, Point const point);

class	Point
{
	public:
		Point(void);
		Point(const Point&);
		Point(const float, const float);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point	&operator=(const Point&);
	private:
		Fixed	_x;
		Fixed	_y;
};

#endif
