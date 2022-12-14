/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:59:17 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 13:55:24 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("Jamie"), _nFloor(0), _idx(0)
{
	if (DEBUG)
		std::cout << "Character default constructor" << std::endl;
}

Character::Character(const std::string &name): _nFloor(0), _idx(0)
{
	if (DEBUG)
		std::cout << "Character parametric constructor" << std::endl;
	if (name.empty())
		this->_name = "Default Name";
	else
		this->_name = name;
}

Character::Character(const Character &copy)
{
	if (DEBUG)
		std::cout << "Character copy constructor" << std::endl;
	*this = copy;
}

Character::~Character(void)
{
	if (DEBUG)
		std::cout << "Character destructor" << std::endl;
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
	this->_idx++;
}

void	Character::unequip(int idx)
{
	if (unsigned(idx) < this->_idx)
	{
		unsigned int i = 0;
		std::cout << "Unequip " << this->_inventory[idx]->getType() << std::endl;
		this->_onFloor[this->_nFloor] = this->_inventory[idx];
		this->_nFloor++;
		if (this->_idx == 1)
		{
			this->_inventory[idx] = 0;
			this->_idx--;
			std::cout << "The inventory is now empty" << std::endl;
		}
		else
		{
			this->_idx--;
			for (i = idx; i < this->_idx - 1; i++)
				this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = 0;
			std::cout << "There is/are " << this->_idx << " items left" << std::endl;
		}
	}
	else
		std::cout << "There is already no items here" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || target.getName().empty())
		std::cout << "Something is not valid" << std::endl;
	else if (unsigned(idx) >= this->_idx)
		std::cout << "No item here" << std::endl;
	else
	{
		if (this->_inventory[idx])
		{
			std::cout << this->getName() << " uses "
				<< this->_inventory[idx]->getType() << " on "
				<< target.getName() << ": " << std::endl;
			this->_inventory[idx]->use(target);
		}
		else
			std::cout << this->getName() << " uses nothing on "
				<< target.getName() << std::endl;
	}
}

//OVERLOAD

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs.getName();
	for (unsigned int i = 0; i < this->_idx; i++)
		delete this->_inventory[i];
	this->_idx = rhs._idx;
	for (unsigned int j = 0; j < this->_idx; j++)
		this->_inventory[j] = rhs._inventory[j];
	for (unsigned int i = 0; i < this->_nFloor; i++)
		delete this->_onFloor[i];
	this->_nFloor = rhs._nFloor;
	for (unsigned int j = 0; j < this->_nFloor; j++)
		this->_onFloor[j] = rhs._onFloor[j];
	return (*this);
}

