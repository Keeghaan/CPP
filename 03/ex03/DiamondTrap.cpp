/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:30 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 20:00:58 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap(name),
	ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << getName()
		<< "\e[0;33m DiamondTrap default constructor called\033[0m" << std::endl;
	this->_hitPoints = this->FragTrap::ClapTrap::getHit();
	this->_energyPoints = this->ScavTrap::ClapTrap::getEn();
	this->_attackDamage = this->FragTrap::ClapTrap::getDam();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap::ClapTrap(copy),
	ScavTrap::ScavTrap(copy), FragTrap::FragTrap(copy)
{
	std::cout << getName()
		<< "\e[0;33m DiamondTrap copy constructor called\033[0m" << std::endl;	
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << getName()
		<< "\e[0;33m DiamondTrap destructor called\033[0m" << std::endl;	
}

void	DiamondTrap::attack(const std::string &target)
{
//	std::cout << "In DiamondTrap attack :";
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << getName() << " AND " << ClapTrap::getName()
		<< std::endl;
}
