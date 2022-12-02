/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:01:19 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 13:45:07 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	if (DEBUG)
		std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point &copy)
{
	if (DEBUG)
		std::cout << "Point copy constructor called" << std::endl;
	*this = copy;
}

Point::Point(const float fx, const float fy): _x(fx), _y(fy)
{
	if (DEBUG)
		std::cout << "Point float constructor called" << std::endl;
}

Point::~Point(void)
{
	if (DEBUG)
		std::cout << "Point destructor called" << std::endl;
}

// ACCESSORS

Fixed	Point::getX(void) const
{
	if (DEBUG)
		std::cout << "Point getX func called" << std::endl;
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	if (DEBUG)
		std::cout << "Point getY func called" << std::endl;
	return (this->_y);
}

//OVERLOAD

Point	&Point::operator=(const Point &rhs)
{
	if (DEBUG)
		std::cout << "Point assignment overload called" << std::endl;
	*const_cast<Fixed*> (&_x)= rhs.getX();
	*const_cast<Fixed*> (&_y)= rhs.getY();
	//(void)rhs;
	return (*this);
}
