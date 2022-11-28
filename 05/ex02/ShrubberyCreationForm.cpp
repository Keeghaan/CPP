#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm::AForm()
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	this->AForm::_name = "shrubbery";
	this->AForm::_signGrade = 145;
	this->AForm::_execGrade = 137;
	this->AForm::_target = "garden";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm::AForm()
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
	if (target.empty())
		this->_target = "garden";
	else
		this->_target = target;
	this->AForm::_name = "shrubbery";
	this->AForm::_signGrade = 145;
	this->AForm::_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	AForm::AForm(copy)
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
