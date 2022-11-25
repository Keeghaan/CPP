/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:58:09 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 16:53:45 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << RD << "WrongAnimal default constructor" << END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << RD << "WrongAnimal copy constructor" << END << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RD << "WrongAnimal destructor" << END << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << RD << "WrongAnimal: WroOoog soUuUnd" << END << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

//OVERLOAD

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
