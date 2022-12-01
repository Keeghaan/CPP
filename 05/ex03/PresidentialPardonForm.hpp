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
		
		virtual void	beSigned(const Bureaucrat&);
		virtual void	execute(const Bureaucrat&);

		PresidentialPardonForm	&operator=(const PresidentialPardonForm&);
	private:
		const std::string	_name;
//		const std::string	_target;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
