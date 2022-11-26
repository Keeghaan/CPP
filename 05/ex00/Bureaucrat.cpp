/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:26:39 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:57:19 by jcourtoi         ###   ########.fr       */
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
	try
	{
		if (grade > 0 && grade <= 150)
			this->_grade = grade;
		else
			throw (std::exception());
	}
	catch (std::exception &e)
	{
		/*if (grade < 1)
			Bureaucrat::GradeTooHighException::what();
		else if (grade > 150)
			Bureaucrat::GradeTooLowException::what();*/
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

void	Bureaucrat::promote(void)
{
	try
	{
		if (this->_grade > 1)
			(*this)--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
//	catch (std::exception &e)
//	{
//	}
	catch (Bureaucrat::GradeTooHighException &eb)
	{
		eb.what();
		//Bureaucrat::GradeTooLowException::what();
	}
}

void	Bureaucrat::demote(void)
{
	try
	{
		if (this->_grade < 150)
			(*this)++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout <<"test" << std::endl; //
	}
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
	std::cout << getName() << " has been demoted. He is now grade "
		<< getGrade() << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << bur.getName() << ", bureaucrat grade "<< bur.getGrade() << std::endl;
	return (out);
}
