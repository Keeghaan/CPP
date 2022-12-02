/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:55:26 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 16:34:20 by jcourtoi         ###   ########.fr       */
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
		std::string	intS("56");
		Convert	intTest(intS);
		std::string	charS("j");
		Convert	charTest(charS);
		std::string	floatS("23.4f");
		Convert	floatTest(floatS);
		std::string	doubleS("47.2");
		Convert	doubleTest(doubleS);
		std::string	weirdF("nanf");
		Convert	weirdFloat(weirdF);
		std::string	weirdD("nan");
		Convert	weirdDouble(weirdD);

		std::cout << intTest << std::endl;
		intTest.converter();
		std::cout << std::endl;
		std::cout << charTest << std::endl;
		charTest.converter();
		std::cout << std::endl;
		std::cout << floatTest << std::endl;
		floatTest.converter();
		std::cout << std::endl;
		std::cout << doubleTest << std::endl;
		doubleTest.converter();
		std::cout << std::endl;
		std::cout << weirdFloat << std::endl;
		weirdFloat.converter();
		std::cout << std::endl;
		std::cout << weirdDouble << std::endl << std::endl;
		weirdDouble.converter();
		std::cout << std::endl;
	}
	return (0);
}