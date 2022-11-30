/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:18:05 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 13:33:16 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type)
{
	if (DEBUG)
		std::cout << "AMateria default constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	if (DEBUG)
		std::cout << "AMateria destructor" << std::endl;
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
