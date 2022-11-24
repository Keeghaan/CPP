/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:28:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 17:42:16 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << name << "\e[0;31m ScavTrap default constructor called\033[0m" << std::endl;
	this->ClapTrap::setHit(100);
	this->ClapTrap::setEn(50);
	this->ClapTrap::setDam(20);
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
	std::cout << "ScavTrap " << getName() << " attacks " << target << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\e[0;31mScavTrap " << getName() << ": Gate keeper mode on\033[0m" << std::endl;
}

