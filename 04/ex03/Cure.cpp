/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:37:55 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 10:38:57 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria::AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &copy): AMateria::AMateria(copy.getType())
{
	std::cout << "Cure copy constructor" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	AMateria	*newCure = new Cure();
	return (newCure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cure : \"* heals " << target.getName() << "'s wounds *\""
		<< std::endl;
}

//OVERLOAD

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}
