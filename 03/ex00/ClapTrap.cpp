/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:29:31 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 19:14:08 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name="Unknown"): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	if (DEBUG)
		std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	if (DEBUG)
		std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	if (DEBUG)
		std::cout << "ClapTrap destructor called" << std::endl;
}

//ACCESSORS

std::string	ClapTrap::getName(void) const
{

}

void	ClapTrap::setName(const std::string name)
{

}

unsigned int	ClapTrap::getHit(void) const
{

}

void	ClapTrap::setHit(const unsigned int hit)
{

}

unsigned int	ClapTrap::getEn(void) const
{

}

void	ClapTrap::setEn(const unsigned int en)
{

}

unsigned int	ClapTrap::getDam(void) const
{

}

void	ClapTrap::setDam(const unsigned int dam)
{

}

void	ClapTrap::attack(const std::string &target)
{
	if (DEBUG)
		std::cout << "ClapTrap attack func called" << std::endl;
	if (!getDam())
		std::cout << getName() << " attacks " << target
			<< ", causing no damage at all!" << std::endl;
	if (getDam() > 0 && getHit() > 0 && getEn() > 0)
	{
		_attackDamage--;
		if (getDam() == 1)
			std::cout << getName() << " attacks " << target
				<< ", causing one point of damage!" << std::endl;
		else 
			std::cout << getName() << " attacks " << target << ", causing "
				<< getDam() << " points of damage!" << std::endl;
	}
	if (!getHit())
		std::cout << "A dead ClapTrap can't attack anything. Sorry" << std::endl;
	if (!getEn() && getHit())
		std::cout << "A tired ClapTrap is a useless ClapTrap, can't attack. Sorry"
			<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap takeDamage func called" << std::endl;
	if (getHit() > 0 && getHit() > amount)
	{
		this->_hitPoints -= amount;
		std::cout << getName() << " took " << amount << " damage and has now "
			<< getHit() << " hit points left" << std::endl;
	}
	else if (!getHit())
		std::cout << getName() << " is already dead. Stop now !" << std::endl;
	else if (getHit() >= amount)
	{
		this->_hitPoints = 0;
		std::cout << getName() << " is dead." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap beRepaired func called" << std::endl;
	if (getHit() == INT_MAX - 1)
		std::cout << getName() << " 's got WAY ENOUGH hit points" << std::endl;
	else if (getHit() < INT_MAX - 1)
	{
		if (this->_hitPoints + amount < INT_MAX - 1)
		{
			this->_hitPoints += amount;
			std::cout << getName() << " 's been repaired with " << amount
				<< " points and now has " << getHit() << " hit points"
				<< std::endl;
		}
		else
		{
			std::cout << getName() << "'s been full repaired" << std::endl;
			this->_hitPoints = INT_MAX - 2;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap takeDamage func called" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap beRepaired func called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (DEBUG)
		std::cout << "ClapTrap assignment overload called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEn();
	this->_attackDamage = rhs.getDam();
	return (*this);
}
