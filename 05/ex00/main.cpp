/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:18:02 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:02:28 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		Bureaucrat	testAv(av[1], atoi(av[2]));

		std::cout << testAv << std::endl;
	}
	else
	{
		Bureaucrat	test;
		Bureaucrat	testAussi("Truc", 15);
		
		std::cout << std::endl;
		std::cout << test << std::endl;
		std::cout << testAussi << std::endl;
		test++;
		testAussi--;
		std::cout << test << std::endl;
		std::cout << testAussi << std::endl;
	}
	return (0);
}
