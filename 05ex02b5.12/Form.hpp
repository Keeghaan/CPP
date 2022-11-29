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
		~Form(void);
	
		std::string	getName(void) const;
		bool		isSigned(void) const;
		unsigned int	whichSignGrade(void) const;
		unsigned int	whichExecGrade(void) const;

		void	beSigned(Bureaucrat&);

		Form	&operator=(const Form&);
	private:
		std::string	_name;
		bool		_signed;
		unsigned int	_signGrade;
		unsigned int	_execGrade;	 
};

std::ostream	&operator<<(std::ostream&, const Form&);

#endif