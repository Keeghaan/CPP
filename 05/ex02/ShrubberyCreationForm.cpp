#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm::AForm(),
	_signGrade(145), _execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
AForm::AForm(target, 145, 137), _signGrade(145), _execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	AForm::AForm(copy), _signGrade(145), _execGrade(137)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void	ShrubberyCreationForm::createShrub(void)
{
	std::ofstream	outfile;
	std::string		namefile = this->_name;

	outfile.open(namefile.append("_shrubbery").c_str(),
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

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	std::cout << this->_signGrade << std::endl;
	if (this->_signed)
	{
		if (executor.getGrade() <= this->_execGrade)
			createShrub();
		else
			throw GradeTooLowException();
	}
	else
		std::cout << "This has to be signed first" << std::endl;
}
