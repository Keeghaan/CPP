#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form::Form()
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
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


