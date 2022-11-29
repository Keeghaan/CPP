#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm::AForm()
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm default constructor" << std::endl;
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
