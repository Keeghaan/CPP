/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:35 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:13:03 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << name << "\e[0;32m FragTrap default constructor called\033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap::ClapTrap(copy)
{
	std::cout << getName() << "\e[0;32m FragTrap copy constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << getName() << "\e[0;32m FragTrap destructor called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (DEBUG)
		std::cout << "\e[0;32mFragTrap highFivesGuys func called\033[0m" << std::endl;
	std::cout << "\e[0;32mHIGH FIVE ???\033[0m" << std::endl;
}
