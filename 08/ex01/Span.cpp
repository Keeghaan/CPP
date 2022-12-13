/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:45:18 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/08 13:29:39 by jcourtoi         ###   ########.fr       */
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
	return (this->_stock.size());
}

std::vector<int>	Span::getVector(void) const
{
	return (this->_stock);
}

int	Span::getContent(unsigned int index) const
{
	try
	{
		if (index > this->_nMax)
			throw MaxReachedException();
		if (this->_stock.empty())
			throw NotEnoughToCompareException();
		return (this->_stock.at(index));
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

void	Span::addNumber(unsigned int n)
{
	try
	{
		if (this->_stock.size() == this->_nMax)
			throw MaxReachedException();
		this->_stock.push_back(n);
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
		std::vector<int>	tmp(this->_stock);
		
		std::sort(tmp.begin(), tmp.end());
		dist = *(tmp.begin() + 1) - *tmp.begin();
		for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; ++it)
		{
			if (*(it + 1) - *it < int(dist))
				dist = *(it + 1) - *it;
		}	
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
		std::vector<int>::const_iterator max = std::max_element(this->_stock.begin(),
			this->_stock.end());
		std::vector<int>::const_iterator min = std::min_element(this->_stock.begin(),
			this->_stock.end());
		dist = *max - *min;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (dist);
}

void	Span::addMoreNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		if (std::distance(begin, end) > this->_nMax)
			throw MaxReachedException();
		else
			this->_stock.insert(this->_stock.end(), begin, end);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::randInit(unsigned int count)
{
	std::srand(std::time(0));
	try
	{
		if (count > MAXIMUM)
			throw Span::TooMuchException();
		if (count > this->_nMax)
		{
			for (unsigned int i = 0; i < this->_nMax; i++)
				this->_stock.push_back(std::rand() % 1000 - 500);
			throw MaxReachedException();
		}
		else
		{
			for (unsigned int i = 0; i < count; i++)
				this->_stock.push_back(std::rand() % 1000 - 500);
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

const char	*Span::TooMuchException::what(void) const throw()
{
	return (CRED("I don't accept that much"));
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
