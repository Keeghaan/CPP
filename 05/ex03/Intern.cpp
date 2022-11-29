#include "Intern.hpp"

Intern::Intern(void)
{
	if (DEBUG)
		std::cout << "Intern default constructor" << std::endl;
	this->_form[0] = &Intern::makeShForm;
	this->_form[1] = &Intern::makePrForm;
	this->_form[2] = &Intern::makeRForm;
}

Intern::Intern(const Intern &copy)
{
	if (DEBUG)
		std::cout << "Intern copy constructor" << std::endl;
	*this = copy;
}

Intern::~Intern(void)
{
	if (DEBUG)
		std::cout << "Intern destructor" << std::endl;
}

AForm	*Intern::makeShForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makePrForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeRForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string	checkName[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	int		ok = -1;

	for (int i = 0; i < 3; i++)
	{
		if (!checkName[i].compare(name))
			ok = i;
	}
	if (name.empty() || target.empty() || ok == -1)
		throw WrongTypeException();
	std::cout << "Intern creates " << name << " form" << std::endl;
	return ((this->*_form[ok])(target));
}

const char	*Intern::WrongTypeException::what(void) const throw()
{
	return ("Wrong type of form");
}

//OVERLOAD

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}
