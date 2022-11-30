#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		virtual ~PresidentialPardonForm(void);

		virtual void	execute(const Bureaucrat&);

	private:
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
