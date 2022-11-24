/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:35 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 17:20:41 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << "\e[0;32mFragTrap default constructor called\033[0m" << std::endl;
	this->ClapTrap::setHit(100);
	this->ClapTrap::setEn(100);
	this->ClapTrap::setDam(30);
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap::ClapTrap(copy)
{
	std::cout << "\e[0;32mFragTrap copy constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\e[0;32mFragTrap destructor called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (DEBUG)
		std::cout << "\e[0;32mFragTrap highFivesGuys func called\033[0m" << std::endl;
	std::cout << "\e[0;32mHIGH FIVE ???\033[0m" << std::endl;
}
