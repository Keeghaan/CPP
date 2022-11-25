/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:30 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 11:45:29 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap(name),
	ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << YL <<	getName() 
		<< " DiamondTrap default constructor called" << END << std::endl;
	this->ClapTrap::setHit(FragTrap::_hitPoints);
	this->ClapTrap::setEn(ScavTrap::_energyPoints);
	this->ClapTrap::setDam(FragTrap::_attackDamage);
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
	std::string	name = getName() + "_clap_name";

	std::cout << YL << "I am " << getName() << " AND my subObject name is " << name
		<< END << std::endl;
}
