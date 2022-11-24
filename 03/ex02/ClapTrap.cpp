/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:29:31 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 17:42:54 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):  _hitPoints(10), _energyPoints(10),
	_attackDamage(0)
{
	setName(name);
	std::cout << name << "\e[0;34m ClapTrap default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << getName() << "\e[0;34m ClapTrap copy constructor called\033[0m" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << getName() << "\e[0;34m ClapTrap destructor called\033[0m" << std::endl;
}

//ACCESSORS

std::string	ClapTrap::getName(void) const
{
	if (DEBUG)
		std::cout << "ClapTrap getName func called" << std::endl;
	return (this->_name);
}

void	ClapTrap::setName(const std::string name)
{
	if (DEBUG)
		std::cout << "ClapTrap setName func called" << std::endl;
	if (name.empty())
		this->_name = "Unknown";
	else
		this->_name = name;
}

unsigned int	ClapTrap::getHit(void) const
{
	if (DEBUG)
		std::cout << "ClapTrap getHit func called" << std::endl;
	return (this->_hitPoints);
}

void	ClapTrap::setHit(const unsigned int hit)
{
	if (DEBUG)
		std::cout << "ClapTrap setHit func called" << std::endl;
	this->_hitPoints = hit;
}

unsigned int	ClapTrap::getEn(void) const
{
	if (DEBUG)
		std::cout << "ClapTrap getEn func called" << std::endl;
	return (this->_energyPoints);
}


void	ClapTrap::setEn(const unsigned int en)
{
	if (DEBUG)
		std::cout << "ClapTrap setEn func called" << std::endl;
	this->_energyPoints = en;
}

unsigned int	ClapTrap::getDam(void) const
{
	if (DEBUG)
		std::cout << "ClapTrap getDam func called" << std::endl;
	return (this->_attackDamage);
}

void	ClapTrap::setDam(const unsigned int dam)
{
	if (DEBUG)
		std::cout << "ClapTrap setDam func called" << std::endl;
	this->_attackDamage = dam;
}

void	ClapTrap::attack(const std::string &target)
{
	if (DEBUG)
		std::cout << "ClapTrap attack func called" << std::endl;
	if (!getHit())
		std::cout << "A dead ClapTrap can't attack anything. Sorry" << std::endl;
	else if (!getEn() && getHit())
		std::cout << "A tired ClapTrap is a useless ClapTrap, can't attack. Sorry"
			<< std::endl;
	else 
	{
		_energyPoints--;
		std::cout << "This action cost 1 energy point(" << getEn() << " left) : ";
		if (!getDam())
			std::cout << getName() << " attacks " << target
				<< ", causing no damage at all!" << std::endl;
		if (getDam() > 0 && getHit() > 0 && getEn() > 0)
		{
			if (getDam() == 1)	
				std::cout << getName() << " attacks " << target
					<< ", causing one point of damage!" << std::endl;
			else 
				std::cout << getName() << " attacks " << target << ", causing "
					<< getDam() << " points of damage!" << std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap takeDamage func called" << std::endl;
	if (getHit() > 0 && getHit() > amount)
	{
		this->_hitPoints -= amount;
		std::cout << getName() << " took " << amount << " damage(s) and has now "
			<< getHit() << " hit points left" << std::endl;
	}
	else if (!getHit())
		std::cout << getName() << " is already dead. Stop now !" << std::endl;
	else if (getHit() <= amount)
	{
		this->_hitPoints = 0;
		std::cout << getName() << " took " << amount << " damages and is now dead."
			<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (DEBUG)
		std::cout << "ClapTrap beRepaired func called" << std::endl;
	if (getHit() == INT_MAX)
		std::cout << getName() << " 's got WAY ENOUGH hit points" << std::endl;
	else if (getHit() < INT_MAX)
	{
		std::cout << "This action cost 1 energy point.(" << getEn() << ") left : ";
		if (this->_hitPoints + amount < INT_MAX)
		{
			this->_hitPoints += amount;
			std::cout << getName() << " 's been repaired with " << amount
				<< " points and now has " << getHit() << " hit points"
				<< std::endl;
		}
		else
		{
			std::cout << getName() << "'s been full repaired" << std::endl;
			this->_hitPoints = INT_MAX;
		}
	}
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
