#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm&);
		virtual ~PresidentialPardonForm(void);

		virtual void	beSigned(Bureaucrat&);
		virtual void	execute(const Bureaucrat&) const;
};

#endif
