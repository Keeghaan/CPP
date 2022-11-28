#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>

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

		virtual void	beSigned(Bureaucrat&) = 0;

		AForm	&operator=(const AForm&);
	protected:
		std::string	_name;
		bool		_signed;
		unsigned int	_signGrade;
		unsigned int	_execGrade;
		std::string	_target; 
};

std::ostream	&operator<<(std::ostream&, const AForm&);

#endif
