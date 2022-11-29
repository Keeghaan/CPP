#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form::Form()
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm default constructor" << std::endl;
	this->Form::_name = "robotomy";
	this->Form::_signGrade = 72;
	this->Form::_execGrade = 45;
	this->Form::_signed = 0;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	Form::Form(copy)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void	RobotomyRequestForm::beSigned(Bureaucrat &b)
{
	std::cout << this->getName();
	b.signForm(*this);
	if (b.getGrade() > this->_signGrade)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;	 
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed && executor.executeForm())
	{
		static int	succeed = 1;
	
		std::cout << "ZZZZZZZZZZZZZZ" << std::endl;
		if (succeed)
		{
			std::cout << this->_target << " has been robotomised" << std::endl;
			succeed = 0;
		}
		else
			std::cout << "The robotomy didnt work" << std::endl;
	}
}
