/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:29:49 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 12:57:25 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor" << std::endl;
}

//IMATERIASOURCE FUNC


void	MateriaSource::learnMateria(AMateria* source)
{
	for (int i = 0; i < INV; i++)
	{
		if (!this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = source;
			std::cout << source.getType() << " learnt" << std::end;
			return ;
		}
	}
	std::cout << "Cannot learn materia anymore" << std::endl;
	
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < INV; i++)
	{
		if (!this->_materias[i].getType().compare(type))
			return (this->_materias[i]);
	}
	std::cout << "Cannot find a " << type << " materia" << std::endl;
	return (NULL);
}

//OVERLOAD

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	
	return (*this);
}
