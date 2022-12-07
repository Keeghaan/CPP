/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:45:18 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/07 17:10:35 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _nMax(n), _size(0)
{
	if (DEBUG)
		std::cout << "Span parametric constructor" << std::endl;
}

Span::Span(const Span &copy): _nMax(copy.getMax()), _size(copy.getSize())
{
	if (DEBUG)
		std::cout << "Span copy constructor" << std::endl;
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

unsigned int	Span::getSize(void) const
{
	return (this->_size);
}

int	Span::getContent(unsigned int index) const
{
	return (this->_stock.at(index));
}

void	Span::addNumber(unsigned int n)
{
	try
	{
		if (this->_stock.size() == this->_nMax)
			throw MaxReachedException();
		this->_stock.push_back(n);
		this->_size++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	dist = 0;

	try
	{
		if (this->_stock.size() < 2)
			throw NotEnoughToCompareException();
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
		if (DEBUG > 1)
			std::cout << "MIN : " << *min << " Second min : " << *sdMin << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (dist);
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	dist = 0;

	try
	{
		if (this->_stock.size() < 2)
			throw NotEnoughToCompareException();
		std::vector<int>::const_iterator max;
		std::vector<int>::const_iterator min = std::min_element(this->_stock.begin(),
			this->_stock.end());
		
		max = std::max_element(this->_stock.begin(), this->_stock.end());
		if (max > min)
			dist = std::distance(min, max);
		else
			dist = std::distance(max, min);
		if (DEBUG > 1)
			std::cout << "Max : " << *max << " min : " << *min << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (dist);
}

void	Span::addMoreNumber(unsigned int count)
{
	std::srand(std::time(0));
	try
	{
		if (count > this->_nMax)
		{
			for (unsigned int i = 0; i < this->_nMax; i++)
			{
				this->_stock.push_back(std::rand() % 1000 - 500);
				this->_size++;
			}
			throw MaxReachedException();
		}
		else
		{
			for (unsigned int i = 0; i < count; i++)
			{
				this->_stock.push_back(std::rand() % 1000 - 500);
				this->_size++;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
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
	if (this != &rhs)
		this->_stock = rhs._stock;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Span &rhs)
{
	for (unsigned int i = 0; i != rhs.getSize(); i++)
		out << rhs.getContent(i) << std::endl;
	return (out);
}
