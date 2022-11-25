/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:15:35 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 12:37:17 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name)
{
	std::cout << GR << getName() << " FragTrap default constructor called" << END << std::endl;
	this->ClapTrap::setHit(100);
	this->ClapTrap::setEn(100);
	this->ClapTrap::setDam(30);
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap::ClapTrap(copy)
{
	std::cout << GR << getName() << " FragTrap copy constructor called" << END << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << GR << getName() << " FragTrap destructor called" << END << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (DEBUG)
		std::cout << "FragTrap highFivesGuys func called" << std::endl;
	std::cout << GR << "HIGH FIVE ???" << END << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (DEBUG)
		std::cout << "FragTrap assignment overload called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEn();
	this->_attackDamage = rhs.getDam();
	return (*this);
}
