/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:41:40 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:57:44 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal::Animal()
{
	std::cout << GR << getType() << " Cat default constructor" << END << std::endl;
	this->_type = "feline";
}

Cat::Cat(const Cat &copy): Animal::Animal(copy)
{
	std::cout << GR << getType() << " Cat copy constructor" << END << std::endl;
}

Cat::~Cat(void)
{
	std::cout << GR << getType() << " Cat destructor" << END << std::endl;
}

void	makeSound(void)
{
	std::cout << "MeaoOoOow" << std::endl;
}
