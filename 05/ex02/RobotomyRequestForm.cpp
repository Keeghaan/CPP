#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm::AForm()
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm default constructor" << std::endl;
	this->AForm::_signGrade = 72;
	this->AForm::_execGrade = 45;
	this->AForm::_signed = 0;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm::AForm(target, 72, 45)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm parametric constructor" << std::endl;
	this->AForm::_signGrade = 72;
	this->AForm::_execGrade = 45;
	this->AForm::_signed = 0;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	AForm::AForm(copy)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
		{
			static int	succeed = 0;
			
			std::cout << "ZZZZZZZZZZZZZZ" << std::endl;
			if (succeed % 2 == 0)
				std::cout << this->_name << " has been robotomised" << std::endl;
			else
				std::cout << "The robotomy didnt work" << std::endl;
			succeed++;
		}
		else
			throw GradeTooLowException();
	}
	else
		std::cerr << "This has to be signed first" << std::endl;		
	
}
