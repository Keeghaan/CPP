/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:27:53 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 10:36:30 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria::AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &copy): AMateria::AMateria(copy.getType())
{
	std::cout << "Ice copy constructor" << std::endl;
	//*this = copy;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor" << std::endl;
}

Ice	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "Ice : \"* shoots an ice bolt at " << target.getName() << " *\""
		<< std::endl;
}