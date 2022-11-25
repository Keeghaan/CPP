/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:30 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 12:42:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(name), FragTrap::FragTrap(name)
{
	std::cout << YL << getName() 
		<< " DiamondTrap default constructor called" << END << std::endl;
	setHit(FRAG_HP);
	setEn(SCAV_EN);
	setDam(FRAG_AD);
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
	std::cout << YL << "In DiamondTrap attack :" << END;
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::string	name = getName() + "_clap_name";

	std::cout << YL << "I am " << getName() << " AND my subObject name is " << name
		<< END << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (DEBUG)
		std::cout << "DiamondTrap assignment overload called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEn();
	this->_attackDamage = rhs.getDam();
	return (*this);
}
