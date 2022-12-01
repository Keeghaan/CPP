#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		virtual ~ShrubberyCreationForm(void);


		virtual void	beSigned(const Bureaucrat&);
		virtual void	execute(const Bureaucrat&);
		
		class	FileDoesntOpenException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);
	private:
		const std::string	_name;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
