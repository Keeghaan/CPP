/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:41:40 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 18:51:32 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal::Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << GR << "Cat default constructor" << END << std::endl;
}

Cat::Cat(const Cat &copy): Animal::Animal(copy)
{
	std::cout << GR << "Cat copy constructor" << END << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << GR << "Cat destructor" << END << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << GR << "Cat: MeaoOoOow" << END << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
	return (*this);
}
