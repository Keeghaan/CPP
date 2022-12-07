/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:45:18 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/07 13:02:59 by jcourtoi         ###   ########.fr       */
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
	//unsigned int	sdSmallest;
//	std::vector<unsigned int>::iterator it; 
	std::vector<int>::const_iterator min = std::min_element(this->_stock.begin(), this->_stock.end());
	

	std::cout << /*sdSmallest*/*min << std::endl;
	return (*min);
//	std::vector<unsigned int>::iterator min = std::min_element(this->_stock.begin(), this->_stock.end());
//	std::for_each(this->_stock.begin(), this->_stock.end(), Span::search2ndSmallest(min));
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_stock.size() < 2)
		throw NotEnoughToCompareException();
	return (56);
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
