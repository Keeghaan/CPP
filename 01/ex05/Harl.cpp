/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:23:04 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/09 18:42:13 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdio>
Harl::Harl(void)
{
	std::cout << "constructor" << std::endl;
	this->_complain[DEBUG].level = "DEBUG";
	this->_complain[DEBUG].f = &Harl::debug;
	this->_complain[INFO].level = "INFO";
	this->_complain[INFO].f = &Harl::info;
	this->_complain[WARNING].level = "WARNING";
	this->_complain[WARNING].f = &Harl::warning;
	this->_complain[ERROR].level = "ERROR";
	this->_complain[ERROR].f = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "destructor" << std::endl;
}

void Harl::complain(std::string level)
{
	if (level.empty())
		std::cout << "Harl feels fine." << std::endl;
	for (int j = 0; j < 4; j++)
	{
		if (this->_complain[j].level == level)
			return ((this->*_complain[j].f)());
	}
	std::cout << "Unknown level, Harl's probably going crazy" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger ! If you did, "
		<< "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working "
		<< "here since last month." << std::endl;

}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}
