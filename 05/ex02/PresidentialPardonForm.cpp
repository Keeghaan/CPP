#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm::AForm(), _signGrade(25),
	_execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->AForm::_signed = 0;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm::AForm(target, 25, 5), _signGrade(25), _execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->AForm::_signed = 0;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	AForm::AForm(copy), _signGrade(25), _execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::beSigned(const Bureaucrat &toSign)
{
	if (this->_signGrade >= toSign.getGrade())
		this->_signed = 1;
	else
		throw AForm::GradeTooLowException();
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
			std::cout << this->_name << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSignedException();
}

//OVERLOAD

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_signed = rhs.isSigned();
	this->_target = rhs.getTarget();
	return (*this);
}
