/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:18:02 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/01 14:25:04 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern newbie;
    AForm* robF;
    AForm* shrubF;
    AForm* prForm;
    AForm* wrForm;
	Bureaucrat	boss("boss", 1);
	Bureaucrat	lame("Hughie", 150);
    try
    {
        std::cout << std::endl << CBLU("Intern tries to create a shrubbery creation form:") << std::endl;
        shrubF = newbie.makeForm("shrubbery creation", "kitchen");
        std::cout << std::endl << CBLU("Intern tries to create a robotomy request form:") << std::endl;
        robF = newbie.makeForm("robotomy request", "Slartibasfast");
        std::cout << std::endl << CBLU("Intern tries to create a presidential pardon form:") << std::endl;
        prForm = newbie.makeForm("presidential pardon", "Arthur");
        std::cout << std::endl << CBLU("Intern tries to create a get promotion form:") << std::endl;
        wrForm = newbie.makeForm("wrong form", "test");
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << NC << std::endl;
    }
	try
	{
		std::cout << CYEL("ShrubberyCreationForm :") << std::endl;
//		shrubF->beSigned(lame);
		shrubF->beSigned(boss);
//		shrubF->execute(lame);
		shrubF->execute(boss);
		std::cout << CYEL("RobotomyRequestForm : ") << std::endl;
//		robF->beSigned(lame);
		robF->beSigned(boss);
//		robF->execute(lame);
		robF->execute(boss);
		std::cout << CYEL("PresidentialPardonForm :") << std::endl;
	//	prForm->beSigned(lame);
		prForm->beSigned(boss);
//		prForm->execute(lame);
		prForm->execute(boss);	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    if (shrubF)
		delete shrubF;
    if (robF)
		delete robF;
    if (prForm)
		delete prForm;
	return (0);
}
