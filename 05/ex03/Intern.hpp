#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern&);
		virtual ~Intern(void);

		AForm	*makeForm(const std::string&, const std::string&);
		AForm	*makeShForm(const std::string&);
		AForm	*makePrForm(const std::string&);
		AForm	*makeRForm(const std::string&);

	
		class	WrongTypeException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		Intern	&operator=(const Intern&);
	private:
		AForm	*(Intern::*_form[3])(const std::string&);
};

#endif
