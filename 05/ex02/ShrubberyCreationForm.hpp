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

		void			createShrub(void);
		virtual void	execute(const Bureaucrat&);
	private:
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
