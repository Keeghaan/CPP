#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		virtual ~RobotomyRequestForm(void);

		virtual void	beSigned(const Bureaucrat&);
		virtual void	execute(const Bureaucrat&);

		class	RobotomyNotWorkingException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		RobotomyRequestForm	&operator=(const RobotomyRequestForm&);
	private:
		const std::string	_name;
//		const std::string	_target;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
