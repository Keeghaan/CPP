/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:30 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 11:08:57 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap(name),
	ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << YL << getName()
		<< " DiamondTrap default constructor called" << END << std::endl;
	this->_hitPoints = 100;//this->FragTrap::getHit();
	this->_energyPoints = 50;//this->ScavTrap::getEn();
	this->_attackDamage = 30;//this->FragTrap::getDam();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap::ClapTrap(copy),
	ScavTrap::ScavTrap(copy), FragTrap::FragTrap(copy)
{
	std::cout << YL << getName()
		<< " DiamondTrap copy constructor called" << END << std::endl;	
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << YL << getName()
		<< " DiamondTrap destructor called" << END << std::endl;	
}

void	DiamondTrap::attack(const std::string &target)
{
//	std::cout << "In DiamondTrap attack :";
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << YL << "I am " << getName() << " AND " << ClapTrap::getName()
		<< END << std::endl;
}
