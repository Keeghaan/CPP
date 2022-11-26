/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:26:39 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:08:42 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("John Doe"), _grade(150)
{
	if (DEBUG)
		std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	if (DEBUG)
		std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name)
{
	if (DEBUG)
		std::cout << "Bureaucrat parametric constructor" << std::endl;
	if (grade > 0 && grade <= 150)
		this->_grade = grade;
	else
	{
		std::cout << "You entered an invalid grade "
			<< "(Grades from 1(highest) to 150(lowest))" << std::endl
			<< " The default grade is 150" << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG)
		std::cout << "Bureaucrat destructor" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

//OVERLOAD

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	(void)rhs;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++(int)
{
	this->_grade--;
	std::cout << getName() << " has been promoted. He is now grade "
		<< getGrade() << std::endl;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--(int)
{
	this->_grade++;
	std::cout << getName() << " has been downgraded. He is now grade "
		<< getGrade() << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << "Name: " << bur.getName() << ", Grade: "<< bur.getGrade() << std::endl;
	return (out);
}
