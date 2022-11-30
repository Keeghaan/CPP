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

void	PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	std::cout << this->_signGrade << std::endl;
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
			std::cout << this->_name << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		std::cout << "The must be signed first" << std::endl;
}
