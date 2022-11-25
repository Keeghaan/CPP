/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:37:46 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 19:30:23 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal::Animal()
{
	this->_type = "Dog";
	std::cout << BL << "Dog default constructor" << END << std::endl;
}

Dog::Dog(const Dog &copy): Animal::Animal(copy)
{
	std::cout << BL << "Dog copy constructor" << END <<  std::endl;
}

Dog::~Dog(void)
{
	std::cout << BL << "Dog destructor" << END << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << BL << "Dog: WOOF WOOF" << END << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
