/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:28:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 12:38:11 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << RD << getName() << " ScavTrap default constructor called" << END << std::endl;
	setHit(100);
	setEn(50);
	setDam(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap::ClapTrap(copy)
{
	std::cout << RD << getName() << " ScavTrap copy constructor called" << END << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RD << getName() << " ScavTrap destructor called" << END << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (DEBUG)
		std::cout << "ScavTrap attack func called" << std::endl;
	std::cout << RD;
	if (!getHit())
		std::cout << "A dead ScavTrap can't attack anything. Sorry" << std::endl;
	else if (!getEn() && getHit())
		std::cout << "A tired ScavTrap is as useless as a tired ClapTrap, can't attack. Sorry"
			<< std::endl;
	else if (getEn())
	{
		_energyPoints--;
		std::cout << "This action cost 1 energy point(" << getEn() << " left) : ";
		if (getHit() > 0 && getEn() > 0)
		{
			if (target.empty())
				std::cout << "ScavTrap " << getName() << " attacks something, causing "
					<< getDam() << " points of damage!" << std::endl;
			else
				std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
					<< getDam() << " points of damage!" << std::endl;
		}
	}
	std::cout << END;
}

void	ScavTrap::guardGate(void)
{
	std::cout << RD << "ScavTrap " << getName() << ": Gate keeper mode on" << END <<  std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (DEBUG)
		std::cout << "ScavTrap assignment overload called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEn();
	this->_attackDamage = rhs.getDam();
	return (*this);
}
