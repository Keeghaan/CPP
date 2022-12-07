/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:45:18 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/07 13:26:30 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _nMax(n)
{
	if (DEBUG)
		std::cout << "Span parametric constructor" << std::endl;
}

Span::Span(const Span &copy): _nMax(copy.getMax())
{
	*this = copy;
}

Span::~Span(void)
{
	if (DEBUG)
		std::cout << "Span destructor" << std::endl;
}

//ACCESSORS
unsigned int	Span::getMax(void) const
{
	return (this->_nMax);
}


void	Span::addNumber(unsigned int n)
{
	if (this->_stock.size() == this->_nMax)
		throw MaxReachedException();
	this->_stock.push_back(n);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_stock.size() < 2)
		throw NotEnoughToCompareException();
	unsigned int	dist;
	std::vector<int>::const_iterator sdMin;
	std::vector<int>::const_iterator min = std::min_element(this->_stock.begin(),
		this->_stock.end());
	
	if (min == this->_stock.begin())
	{
		sdMin = std::min_element(min + 1, this->_stock.end());
		dist = std::distance(min, sdMin);
	}
	else
	{
		sdMin = std::min_element(this->_stock.begin(), min - 1);	
		dist = std::distance(sdMin, min);
	}
	std::cout << "Min : " << *min << " SdMin : " << *sdMin << std::endl;
	return (dist);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_stock.size() < 2)
		throw NotEnoughToCompareException();
	unsigned int	dist;
	std::vector<int>::const_iterator sdMax;
	std::vector<int>::const_iterator max = std::max_element(this->_stock.begin(),
		this->_stock.end());
	
	if (max == this->_stock.begin())
	{
		sdMax = std::max_element(max + 1, this->_stock.end());
		dist = std::distance(max, sdMax);
	}
	else
	{
		sdMax = std::max_element(this->_stock.begin(), max - 1);
		dist = std::distance(sdMax, max);
	}
	std::cout << "Max : " << *max << " SdMax : " << *sdMax << std::endl;
	return (dist);
}

const char	*Span::MaxReachedException::what(void) const throw()
{
	return (CRED("You can't add any more"));
}

const char	*Span::EmptyException::what(void) const throw()
{
	return (CRED("There is nothing in here"));
}

const char	*Span::NotEnoughToCompareException::what(void) const throw()
{
	return (CRED("There is not enough numbers to compare"));
}

//OVERLOAD

Span	&Span::operator=(const Span &rhs)
{
/*	unsigned int	i = 0;

	if (this != &rhs)
	{
		for (std::vector<int>::iterator it = rhs._stock.begin(); it != rhs._stock.end(); it++)
			this->_stock[i] = *it;
	}*/
	(void)rhs;
	return (*this);
}
