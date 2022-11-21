/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:23:04 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/21 13:36:31 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_complaint[0].f = &Harl::_debug;
	this->_complaint[1].f = &Harl::_info;
	this->_complaint[2].f = &Harl::_warning;
	this->_complaint[3].f = &Harl::_error;
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
	std::string	complaint_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (level.empty())
		std::cout << "Harl feels fine." << std::endl;
	for (int j = 0; j < 4; j++)
	{
		if (complaint_level[j] == level)
			return ((this->*_complaint[j].f)());
	}
	std::cout << "Unknown level, Harl's probably going crazy" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "\e[0;32mI love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do !\033[0m" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "\e[0;34mI cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger ! If you did, "
		<< "I wouldn’t be asking for more !\033[0m" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "\e[0;33mI think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working "
		<< "here since last month.\033[0m" << std::endl;

}

void	Harl::_error(void)
{
	std::cout << "\e[0;31mThis is unacceptable ! "
		<< "I want to speak to the manager now.\033[0m" << std::endl;
}
