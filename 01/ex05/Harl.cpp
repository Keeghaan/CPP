/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:23:04 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/08 17:36:57 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "constructor" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "destructor" << std::endl;
}

void Harl::complain(std::string level)
{
	t_harl	harl[4];
	std::string	msg[4];
	int		j;

	j = 0;
	if (level.empty())
		std::cout << "Harl feels fine." << std::endl;
	while (j < 4)
	{
		if (level.compare(msg[j].c_str))
			
	}
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
