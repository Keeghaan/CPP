#include "Form.hpp"

Form::Form(void): _name("Default"), _signed(0), _signGrade(50), _execGrade(10)
{
	if (DEBUG)
		std::cout << "Form default constructor" << std::endl;
}

Form::Form(const std::string &name, int signG, int execG): _signGrade(signG), _execGrade(execG)
{
	if (DEBUG)
		std::cout << "Form parametric constructor" << std::endl;
	if (name.empty())
		this->_name = "Default";
	else
		this->_name = name;
}

Form::Form(const Form &copy)
{
	if (DEBUG)
		std::cout << "Form copy constructor" << std::endl;
	*this = copy;
}

Form::~Form(void)
{
	if (DEBUG)
		std::cout << "Form destructor" << std::endl;
}

//ACCESSORS

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

unsigned int	Form::whichSignGrade(void) const
{
	return (this->_signGrade);
}

unsigned int	Form::whichExecGrade(void) const
{
	return (this->_execGrade);
}

//OTHER FUNC

void	Form::beSigned(Bureaucrat &b)
{
	b.signForm(*this);
	if (b.getGrade() > this->_signGrade)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;
}

//OVERLOAD

Form	&Form::operator=(const Form &rhs)
{
	this->_name = rhs.getName();
	this->_signGrade = rhs.whichSignGrade();
	this->_execGrade = rhs.whichExecGrade();
	this->_signed = rhs.isSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << "Form " << f.getName() << " can be signed by grades "
		<< f.whichSignGrade() << " and above and execute by "
		<< f.whichExecGrade() << " and above " << std::endl;
	return (out);
}
