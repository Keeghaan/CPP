/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:29:49 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 14:31:04 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _nMateria(0)
{
	if (DEBUG)
		std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < INV; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	if (DEBUG)
		std::cout << "MateriaSource copy constructor" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < this->_nMateria; i++)
		delete this->_materias[i];
	if (DEBUG)
		std::cout << "MateriaSource destructor" << std::endl;
}

unsigned int	MateriaSource::getN(void) const
{
	return (this->_nMateria);
}

//IMATERIASOURCE FUNC


void	MateriaSource::learnMateria(AMateria *source)
{
	if (this->_nMateria < 4)
	{
		this->_materias[this->_nMateria] = source;
		this->_nMateria++;
	}
	else
		std::cout << "Cannot learn materia anymore" << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (unsigned int i = 0; i < this->_nMateria; i++)
	{
		if (this->_materias[i]->getType().compare(type) == 0)
			return (this->_materias[i]);
	}
	std::cout << "Cannot find a " << type << " materia" << std::endl;
	return (0);
}

//OVERLOAD

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{

	if (this->_nMateria)
	{
		for (unsigned int i = 0; i < this->_nMateria; i++)
			delete this->_materias[i];
		for (unsigned int i = 0; i < this->_nMateria; i++) 
		{
			if (i < this->_nMateria) 
				this->_materias[i] = rhs._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	this->_nMateria = rhs.getN();
	return (*this);
}
