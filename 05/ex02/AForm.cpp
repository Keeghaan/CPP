#include "AForm.hpp"

AForm::AForm(void): _signed(0), _name("Default"), _signGrade(50), _execGrade(10)
{
	if (DEBUG)
		std::cout << "AForm default constructor" << std::endl;
}

AForm::AForm(const std::string &name, int signG, int execG):_signed(0), _name(name),
	_signGrade(signG), _execGrade(execG)
{
	if (DEBUG)
		std::cout << "AForm parametric constructor" << std::endl;
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &copy): _signGrade(0), _execGrade(10)
{
	if (DEBUG)
		std::cout << "AForm copy constructor" << std::endl;
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw AForm::GradeTooHighException();
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

std::string	AForm::getTarget(void) const
{
	return (this->_target);
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


const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("AForm : Grade too high");
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("AForm : Grade too low");
}

const char	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("AForm : Form not signed");
}

//OVERLOAD

AForm	&AForm::operator=(const AForm &rhs)
{
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
