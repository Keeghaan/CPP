#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(const std::string&, int, int);
		Form(const Form&);
		virtual ~Form(void);
	
		std::string	getName(void) const;
		bool		isSigned(void) const;
		unsigned int	whichSignGrade(void) const;
		unsigned int	whichExecGrade(void) const;

		class	GradeTooLowException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		void	beSigned(Bureaucrat&);

		Form	&operator=(const Form&);
	private:
		const std::string	_name;
		bool				_signed;
		unsigned int		_signGrade;
		unsigned int		_execGrade;
};

std::ostream	&operator<<(std::ostream&, const Form&);

#endif
