#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm&);
		virtual ~RobotomyRequestForm(void);

		void	robotomise(void);
		void	beSigned(Bureaucrat&);
};

#endif
