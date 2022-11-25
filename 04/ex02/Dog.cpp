/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:37:46 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 18:54:44 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal::Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << BL << "Dog default constructor" << END << std::endl;
}

Dog::Dog(const Dog &copy): Animal::Animal(copy)
{
	*this = copy;
	std::cout << BL << "Dog copy constructor" << END <<  std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << BL << "Dog destructor" << END << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << BL << "Dog: WOOF WOOF" << END << std::endl;
}

//OVERLOAD

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
	return (*this);
}
