#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm::AForm(),
	_name("robotomy request"), _signGrade(72), _execGrade(45)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm default constructor" << std::endl;
	this->AForm::_signed = 0;
	this->AForm::_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm::AForm(target, 72, 45), _name("robotomy request"), _signGrade(72), _execGrade(45)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm parametric constructor" << std::endl;
	this->AForm::_signed = 0;
	if (!target.empty())
		this->AForm::_target = target;
	else
		this->AForm::_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	AForm::AForm(copy), _signGrade(72), _execGrade(45)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	*this = copy;
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void	RobotomyRequestForm::beSigned(const Bureaucrat &toSign)
{
	if (this->_signGrade >= toSign.getGrade())
	{
		this->_signed = 1;
		std::cout << CGRN("RobotomyRequestForm has been signed") << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
		{
			static int	succeed = 0;
			
			std::cout << CYEL("ZZZZZZZZZZZZZZ") << std::endl;
			if (succeed % 2 == 0)
				std::cout << GRN << this->_target << " has been robotomised" << NC << std::endl;
			else
				std::cout << CRED("Robotomy didnt work") << std::endl;
				//throw RobotomyRequestForm::RobotomyNotWorkingException();
			succeed++;
			std::cout << CGRN("RobotomyRequestForm has been executed") << std::endl;
			
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSignedException();
}

const char	*RobotomyRequestForm::RobotomyNotWorkingException::what(void) const throw()
{
	return ("Robotomy didnt work");
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_signed = rhs.isSigned();
	this->_target = rhs.getTarget();
	return (*this);
}
