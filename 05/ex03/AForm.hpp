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
		virtual ~AForm(void);
	
		std::string		getName(void) const;
		std::string		getTarget(void) const;
		bool			isSigned(void) const;
		unsigned int	whichSignGrade(void) const;
		unsigned int	whichExecGrade(void) const;

		virtual void	execute(const Bureaucrat&) = 0;
		virtual void	beSigned(const Bureaucrat&) = 0;
		
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
		class	FormNotSignedException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

		AForm	&operator=(const AForm&);
	
	protected:
		bool		_signed;
		std::string	_target;

	private:
		const std::string		_name;
		const unsigned int		_signGrade;
		const unsigned int		_execGrade;
};

std::ostream	&operator<<(std::ostream&, const AForm&);

#endif
