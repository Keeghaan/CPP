#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form::Form()
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	this->Form::_name = "shrubbery";
	this->Form::_signGrade = 145;
	this->Form::_execGrade = 137;
	this->Form::_target = "garden";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form::Form()
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	if (target.empty())
		this->_target = "garden";
	else
		this->_target = target;
	this->Form::_name = "shrubbery";
	this->Form::_signGrade = 145;
	this->Form::_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	Form::Form(copy)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &b)
{
	b.signForm(*this);
	if (b.getGrade() > this->_signGrade)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_signed = 1;		
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->_signed && executor.executeForm(*this))
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
					"         `:%;.  :;bd%;          %;@%;'\n"
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
}
