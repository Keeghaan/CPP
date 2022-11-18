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
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
	typedef void(Harl::*harlFunc)();
	int	level_n = -1;
	std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	harlFunc	whichFunc[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};	

	if (level.empty())
		std::cerr << "Harl feels fine." << std::endl;
	else
	{
		for (int i; i < 4; i++)
		{
			if (!complaints[i].compare(level))
			{
				level_n = i;
				break ;
			}
		}						
		switch (level_n)
		{
			case (0):
				(this->*(whichFunc[level_n]))();
			case (1):
				(this->*(whichFunc[level_n]))();
			case (2):
				(this->*(whichFunc[level_n]))();
			case (3):
			{
				(this->*(whichFunc[level_n]))();
				break ;
			}
			default:
				std::cerr << "This level of complaint can be ignored." << std::endl;
		}
	}
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger ! If you did, "
		<< "I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working "
		<< "here since last month." << std::endl;

}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}
