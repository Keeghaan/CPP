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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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
			Bureaucrat			test("Edgar", 1);
			const Bureaucrat		&ref = test;
			Bureaucrat			testAussi("Truc", 2);
			const Bureaucrat		&refA = testAussi;
			ShrubberyCreationForm		shForm("garden");
			PresidentialPardonForm		prForm("Ford Prefect");
			RobotomyRequestForm		rForm("Slartibartfast");
	
			std::cout << std::endl;
			std::cout << test << " " << shForm << std::endl;
			try
			{
				shForm.beSigned(ref);
				prForm.beSigned(refA);
				rForm.beSigned(refA);
				shForm.execute(refA);
				prForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);
			}
			catch (std::exception &ef)
			{
				std::cerr << ef.what() << std::endl;
			}
			std::cout << std::endl;
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
