/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:28:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 16:50:05 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name)
{
	if (DEBUG)
		std::cout << "ScavTrap default constructor called" << std::endl;
	this->ClapTrap::setHit(100);
	this->ClapTrap::setEn(50);
	this->ClapTrap::setDam(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap::ClapTrap(copy)
{
	if (DEBUG)
		std::cout << "ScavTrap copy constructor called" << std::endl;
/*	this->_name = copy.getName();
	this->_hitPoints = copy.getHit();
	this->_energyPoints = copy.getEn();
	this->_attackDamage = copy.getDam();
*/}

ScavTrap::~ScavTrap(void)
{
	if (DEBUG)
		std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << ": Gate keeper mode on" << std::endl;
}

