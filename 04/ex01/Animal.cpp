/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:30:36 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 15:38:01 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
	std::cout << YL << "Animal default constructor" << END << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << YL << "Animal copy constructor" << END << std::endl;
	this->_type = copy.getType();
}

Animal::~Animal(void)
{
	std::cout << YL << "Animal destructor" << END << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: ..." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
