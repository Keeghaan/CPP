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

Character::Character(void): _idx(0)
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
	for (unsigned int i = 0; i < this->_idx; i++)
		delete this->_inventory[i];
}
/*
AMateria	*Character::getInventory(void) const
{
	return (this->_inventory);
}
*/
//ICHARACTER FUNC

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < INV; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			this->_idx++;
			std::cout << m->getType() << " equiped in slot " << i << std::endl;
			break ;
		}
	}
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
	if (this->_inventory[idx])
		std::cout << "Use " << this->_inventory[idx] << " on " << target.getName() << std::endl;
	else
		std::cout << "Use nothing on " << target.getName() << std::endl;
}

//OVERLOAD

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < INV; i++)
		delete this->_inventory[i];
	this->_inventory = rhs._inventory;
	return (*this);
}
