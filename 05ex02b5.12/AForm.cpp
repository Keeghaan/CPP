#include "AForm.hpp"

AForm::AForm(void): _name("Default"), _signed(0), _signGrade(50), _execGrade(10)
{
	if (DEBUG)
		std::cout << "AForm default constructor" << std::endl;
}

AForm::AForm(const std::string &name, int signG, int execG): _signGrade(signG), _execGrade(execG)
{
	if (DEBUG)
		std::cout << "AForm parametric constructor" << std::endl;
	if (name.empty())
		this->_name = "Default";
	else
		this->_name = name;
}

AForm::AForm(const AForm &copy)
{
	if (DEBUG)
		std::cout << "AForm copy constructor" << std::endl;
	*this = copy;
}

AForm::~AForm(void)
{
	if (DEBUG)
		std::cout << "AForm destructor" << std::endl;
}

//ACCESSORS

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::isSigned(void) const
{
	return (this->_signed);
}

unsigned int	AForm::whichSignGrade(void) const
{
	return (this->_signGrade);
}

unsigned int	AForm::whichExecGrade(void) const
{
	return (this->_execGrade);
}

//OTHER FUNC

void	AForm::beSigned(Bureaucrat &b)
{
	b.signForm(*this);
	if (b.getGrade() > this->_signGrade)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

//OVERLOAD

AForm	&AForm::operator=(const AForm &rhs)
{
	this->_name = rhs.getName();
	this->_signGrade = rhs.whichSignGrade();
	this->_execGrade = rhs.whichExecGrade();
	this->_signed = rhs.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const AForm &f)
{
	out << "AForm " << f.getName() << " can be signed by grades "
		<< f.whichSignGrade() << " and above and execute by "
		<< f.whichExecGrade() << " and above " << std::endl;
	return (out);
}
