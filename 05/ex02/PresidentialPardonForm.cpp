#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm::AForm()
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->AForm::_name = "presidential";
	this->AForm::_signGrade = 25;
	this->AForm::_execGrade = 5;
	this->AForm::_signed = 0;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	AForm::AForm(copy)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed && executor.executeForm(*this))
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
