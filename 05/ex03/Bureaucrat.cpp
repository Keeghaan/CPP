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

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	if (DEBUG)
		std::cout << "Bureaucrat parametric constructor" << std::endl;
	if (grade > 0 && grade <= 150)
		this->_grade = grade;
	else
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
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

void	Bureaucrat::executeForm(AForm &form)
{
	Bureaucrat	&ref = *this;
	try
	{
		form.execute(ref);
		std::cout << "Bureaucrat " << this->getName() << " executed "
			<< form.getName() << " form" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << this->_name << " couldnt execute "
			<< form.getName() << " form because of " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm &f)
{
	Bureaucrat	&ref = *this;
	try
	{
		f.beSigned(ref);
		std::cout << "Bureaucrat " << this->getName() << " signed "
			<< f.getName() << " form" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << this->_name << " couldnt sign "
			<< f.getName() << " form because of " << e.what() << std::endl;
	}
}

void	Bureaucrat::promote(void)
{
	if (this->_grade > 1)
		(*this)++;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::demote(void)
{
	if (this->_grade > 0 && this->_grade < 150)
		(*this)--;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
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
