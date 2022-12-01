#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm::AForm(),
	_name("shrubbery creation"), _signGrade(145), _execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	this->_target = "garden";
	this->_signed = 0;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
AForm::AForm(target, 145, 137), _name("shrubbery creation"), _signGrade(145),
	_execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	AForm::AForm(copy), _signGrade(145), _execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm destructor" << std::endl;
}
/*
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}
*/
void	ShrubberyCreationForm::createShrub(void)
{
	std::ofstream	outfile;

	outfile.open(this->_target.append("_shrubbery").c_str(),
		std::fstream::in | std::ifstream::trunc);
	if (outfile.is_open())
	{
		outfile <<" 	                                             .\n"
				"                                   .         ;\n"
				"      .              .              ;%     ;;\n"
				"        ,           ,                :;%  %;\n"
				"         :         ;                   :;%;'     .,\n"
				",.        %;     %;            ;        %;'    ,;\n"
				"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
				"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
				"     `%;.     ;%;     %;'         `;%%;.%;'\n"
				"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
				"         `:%;.  :;;;%;          %;@%;'\n"
				"           `@%:.  :;%.         ;@@%;'\n"
				"             `@%.  `;@%.      ;@@%;\n"
				"               `@%%. `@%%    ;@@%;\n"
				"                 ;@%. :@%%  %@@%;\n"
				"                   %@bd%%%bd%%:;\n"
				"                     #@%%%%%:;;\n"
				"                     %@@%%%::;\n"
				"                     %@@@%(o);  . '\n"
				"                     %@@@o%;:(.,'\n"
				"                 `.. %@@@o%::;\n"
				"                    `)@@@o%::;\n"
				"                     %@@(o)::;\n"
				"                    .%@@@@%::;\n"
				"                    ;%@@@@%::;.\n"
				"                   ;%@@@@%%:;;;.\n"
				"               ...;%@@@@@%%:;;;;,..";
		outfile.close();
	}
	else
		std::cerr << "Something went bad with the outfile" << std::endl;
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_signGrade)
		this->_signed = 1;
	else
		throw AForm::GradeTooLowException();
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
			createShrub();
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::FormNotSignedException();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_signed = rhs.isSigned();
	this->_target = rhs.getTarget();
	return (*this);
}
