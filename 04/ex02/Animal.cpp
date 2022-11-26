/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:30:36 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 09:57:57 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void): _type("Animal")
{
	std::cout << YL << "Animal default constructor" << END << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << YL << "AAnimal copy constructor" << END << std::endl;
	this->_type = copy.getType();
}

AAnimal::~AAnimal(void)
{
	std::cout << YL << "Animal destructor" << END << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
