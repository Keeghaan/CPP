#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>
# include <iomanip>
# include <string>

class	Bureaucrat;

class	AForm
{
	public:
		AForm(void);
		AForm(const std::string&, int, int);
		AForm(const AForm&);
		~AForm(void);
	
		std::string	getName(void) const;
		bool		isSigned(void) const;
		unsigned int	whichSignGrade(void) const;
		unsigned int	whichExecGrade(void) const;

		virtual void	execute(const Bureaucrat&) const = 0;
		virtual void	beSigned(const Bureaucrat&);
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
	
		AForm	&operator=(const AForm&);
	protected:
		std::string	_name;
		bool		_signed;
		unsigned int	_signGrade;
		unsigned int	_execGrade;
};

std::ostream	&operator<<(std::ostream&, const AForm&);

#endif
