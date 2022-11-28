/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:59:17 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 13:32:10 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("Jamie"), _idx(0)
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(const std::string &name): _idx(0)
{
	std::cout << "Character parametric constructor" << std::endl;
	if (name.empty())
		this->_name = "Default Name";
	else
		this->_name = name;
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "Character destructor" << std::endl;
//	for (unsigned int i = 0; i < this->_idx; i++)
//		delete this->_inventory[i];
}

//ICHARACTER FUNC

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (m == NULL)
		return ;
	this->_inventory[this->_idx] = m;
	std::cout << m->getType() << " equiped in slot " << this->_idx << std::endl;
	this->_idx++;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		std::cout << "Unequip " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = 0;
		std::cout << "Slot " << idx << " of the inventory is free" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 0 && idx > 3) || target.getName().empty())
		std::cout << "Something is not valid" << std::endl;
	else if (unsigned(idx) >= this->_idx)
		std::cout << "No item here" << std::endl;
	else
	{
		if (this->_inventory[idx])
			std::cout << "Use " << this->_inventory[idx]->getType() << " on " << target.getName() << std::endl;
		else
			std::cout << "Use nothing on " << target.getName() << std::endl;
	}
}


//OVERLOAD

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs.getName();
	for (unsigned int i = 0; i < this->_idx; i++)
		delete this->_inventory[i];
	for (unsigned int j = 0; j < this->_idx; j++)
		this->_inventory[j] = rhs._inventory[j];
	return (*this);
}

