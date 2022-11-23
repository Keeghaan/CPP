/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:23:04 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 12:33:14 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
	int	level_n = -1;
	std::string	complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (level.empty())
		std::cerr << "Harl feels fine." << std::endl;
	else
	{
		for (int i = 0; i < 4; i++)
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
				this->_debug(); //fall through
			case (1):
				this->_info(); // fall through
			case (2):
				this->_warning(); // fall through
			case (3):
			{
				this->_error(); //fall through
				break ;
			}
			default:
				std::cerr << "This level of complaint can be ignored." << std::endl;
		}
	}
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
