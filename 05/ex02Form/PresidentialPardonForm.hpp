#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm&);
		virtual ~PresidentialPardonForm(void);

		virtual void	beSigned(Bureaucrat&);
		virtual void	execute(const Bureaucrat&) const;
};

#endif
