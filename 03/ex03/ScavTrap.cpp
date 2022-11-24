/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:28:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:14:39 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << name << "\e[0;31m ScavTrap default constructor called\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap::ClapTrap(copy)
{
	std::cout << getName() << "\e[0;31m ScavTrap copy constructor called\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << getName() << "\e[0;31m ScavTrap destructor called\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (DEBUG)
		std::cout << "ScavTrap attack func called" << std::endl;
	if (!getHit())
		std::cout << "A dead ScavTrap can't attack anything. Sorry" << std::endl;
	else if (!getEn() && getHit())
		std::cout << "A tired ScavTrap is as useless as a tired ClapTrap, can't attack. Sorry"
			<< std::endl;
	else 
	{
		_energyPoints--;
		std::cout << "This action cost 1 energy point(" << getEn() << " left) : ";
		if (getHit() > 0 && getEn() > 0)
		{
			std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
				<< getDam() << " points of damage!" << std::endl;
		}
	}
}

unsigned int	ScavTrap::getEn(void)
{
	return (this->_energyPoints);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\e[0;31mScavTrap " << getName() << ": Gate keeper mode on\033[0m" << std::endl;
}

