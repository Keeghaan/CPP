/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:18:02 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/01 10:52:06 by jcourtoi         ###   ########.fr       */
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
			Bureaucrat	def;
			std::cout << def << std::endl;
			
//			Bureaucrat	low("centCinquantEtUn", 151);	
//			std::cout << low << std::endl;
			
//			Bureaucrat	high("zero", 0);
//			std::cout << high << std::endl;
			
//			Bureaucrat	neg("negative", -9);
//			std::cout << neg << std::endl;
			
//			Bureaucrat	limM("intMax", INT_MAX);
//			std::cout << limM << std::endl;
			
//			Bureaucrat	limm("intMin", INT_MIN);
//			std::cout << limm << std::endl;


		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat	test;
			Bureaucrat	testAussi("Truc", 1);
		
			std::cout << std::endl;
			std::cout << test << std::endl;
			std::cout << testAussi << std::endl;
			test.promote();
			testAussi.demote();
			std::cout << test << std::endl;
			std::cout << testAussi << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException	&e)
		{
			std::cerr << e.what() << std::endl;	
		}
		catch (const Bureaucrat::GradeTooLowException &be)
		{
			std::cerr << be.what() << std::endl;
		}
	}
	return (0);
}
