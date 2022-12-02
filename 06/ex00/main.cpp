/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:55:26 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/01 16:26:30 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		std::cerr << "Too many arguments" << std::endl;
		return (1);
	}
	(void)av;
/*	if (ac == 2)
	{
		std::string	a = av[1];

		Convert(a);
	}
	else*/
	{
		Convert	intTest("42");
		Convert	charTest("j");
		Convert	floatTest("0.4f");
		Convert	doubleTest("0.2");
		Convert	weirdFloat("+inff");
		Convert	weirdDouble("+inf");

		std::cout << intTest << std::endl << std::endl;
		std::cout << charTest << std::endl << std::endl;
		std::cout << floatTest << std::endl << std::endl;
		std::cout << doubleTest << std::endl << std::endl;
		std::cout << weirdFloat << std::endl << std::endl;
		std::cout << weirdDouble << std::endl << std::endl;
	}
	return (0);
}
