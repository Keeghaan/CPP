/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:18:02 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:56:11 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		try
		{	
			Bureaucrat	testAv(av[1], atoi(av[2]));
	
			std::cout << testAv << std::endl;
			testAv.promote();
		
			std::cout << testAv << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
	{
		try
		{
			Bureaucrat	test;
			Bureaucrat	testAussi("Truc", 15);
			Form		form("562A6", 30, 16);
	
			std::cout << std::endl;
			std::cout << test << " " << form << std::endl;
			std::cout << testAussi << std::endl;
			test.promote();
			testAussi.demote();
			std::cout << test << std::endl;
			std::cout << testAussi << std::endl;
		}
		catch (const std::exception	&e)
		{
			std::cerr << e.what() << std::endl;	
		}
	}
	return (0);
}
