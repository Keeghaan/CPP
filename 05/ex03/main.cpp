/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:18:02 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 17:13:18 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

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
			Intern					newbie;
			AForm					*prff;
			AForm					*shff;
			AForm					*rff;
			ShrubberyCreationForm	tssst;

			std::cout << std::endl;
			std::cout << test << " " << shForm << std::endl;
			try
			{
				shForm.beSigned(ref);
				prForm.beSigned(refA);
				rForm.beSigned(refA);
				prff = newbie.makePrForm("Hyde");
		
				prff->execute(refA);
				prff->beSigned(refA);
				prff->execute(refA);
				
				shff = newbie.makeShForm("kitchen");
				shff->beSigned(ref);
				shff->execute(ref);

				rff = newbie.makeRForm("Arthur");
				rff->beSigned(ref);
				rff->execute(refA);

				tssst = shForm;
				tssst.beSigned(ref);
				tssst.execute(refA);
	/*	shForm.execute(refA);
				prForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);
				rForm.execute(refA);*/
			}
			catch (std::exception &ef)
			{
				delete rff;
				delete shff;
				delete prff;
				std::cerr << ef.what() << std::endl;
			}
			delete rff;
			delete shff;
			delete prff;
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
