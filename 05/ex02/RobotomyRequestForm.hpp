#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm&);
		virtual ~RobotomyRequestForm(void);

		void	robotomise(void);
		void	beSigned(Bureaucrat&);
};

#endif
