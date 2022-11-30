/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:37:55 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 13:33:42 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria::AMateria("cure")
{
	if (DEBUG)
		std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &copy): AMateria::AMateria(copy.getType())
{
	if (DEBUG)
		std::cout << "Cure copy constructor" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	if (DEBUG)
		std::cout << "Cure destructor" << std::endl;
}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"
		<< std::endl;
}
