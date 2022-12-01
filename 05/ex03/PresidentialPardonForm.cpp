#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm::AForm(),
	_name("president pardon"), _signGrade(25), _execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->_signed = 0;
	this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm::AForm(target, 25, 5), _name("president pardon"), _signGrade(25), _execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->_signed = 0;
	if (!target.empty())
		this->_target = target;
	else
		this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	AForm::AForm(copy), _name("president pardon"),  _signGrade(25), _execGrade(5)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	*this = copy;
}


PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::beSigned(const Bureaucrat &toSign)
{
	if (this->_signGrade >= toSign.getGrade())
	{
		this->_signed = 1;
		std::cout << CGRN("PresidentialPardonForm has been signed") << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
		{
			std::cout << YEL << this->_target << " has been pardoned by Zaphod Beeblebrox" << NC << std::endl;
			std::cout << CGRN("PresidentialPardonForm has been executed") << std::endl;
		}
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
