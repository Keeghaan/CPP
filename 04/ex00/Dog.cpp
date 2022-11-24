/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:37:46 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:57:20 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal::Animal()
{
	std::cout << BL << getType() << " Dog default constructor" << END << std::endl;
	this->_type = "canidae";
}

Dog::Dog(const Dog &copy): Animal::Animal(copy)
{
	std::cout << BL << getType() << " Dog copy constructor" << END <<  std::endl;
}

Dog::~Dog(void)
{
	std::cout << BL << getType() << " Dog destructor" << END << std::endl;
}

void	makeSound(void)
{
	std::cout << "WOOF WOOF" << std::endl;
}
