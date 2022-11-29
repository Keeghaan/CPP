#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form::Form()
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->Form::_name = "presidential";
	this->Form::_signGrade = 25;
	this->Form::_execGrade = 5;
	this->Form::_signed = 0;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	Form::Form(copy)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::beSigned(Bureaucrat &b)
{
	std::cout << this->getName();
	b.signForm(*this);
	if (b.getGrade() > this->_signGrade)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed && executor.executeForm(*this))
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
