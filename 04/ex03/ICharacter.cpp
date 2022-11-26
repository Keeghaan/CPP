/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:10:23 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 11:13:22 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default constructor" << std::endl;
}

ICharacter::ICharacter(const std::string &name)
{
	std::cout << "ICharacter parametric constructor" << std::endl;
	if (name.empty())
		this->_name = "Default Name";
	else
		this->_name = name;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICharacter copy constructor" << std::endl;
	*this = copy;
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor" << std::endl;
}

//OVERLOAD

ICharacter	&ICharacter::operator=(const ICharacter &rhs)
{
	(void)rhs;
	return (*this);
}
