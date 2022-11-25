/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:06:55 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 16:10:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << RD << "WrongCat default constructor" << END << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << RD << "WrongCat copy constructor" << END << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << RD << "WrongCat destructor" << END << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << RD << "WrongCat: WroOoong Mewoow" << END << std::endl;
}

//OVERLOAD

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
