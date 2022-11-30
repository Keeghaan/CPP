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

		virtual void	execute(const Bureaucrat&);
	
	private:
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
