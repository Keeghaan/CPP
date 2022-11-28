#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		virtual ~ShrubberyCreationForm(void);
		
		virtual void	beSigned(Bureaucrat&);
		void		execute(const Bureaucrat&) const;		
};

#endif
