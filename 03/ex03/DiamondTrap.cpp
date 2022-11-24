/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:30 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 18:26:04 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	std::cout << getName() << "\e[0;33m DiamondTrap default constructor called\033[0m" << std::endl;
	this->_hitPoints = this->FragTrap::ClapTrap::getHit();
}
