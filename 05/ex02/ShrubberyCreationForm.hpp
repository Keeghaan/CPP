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

//		std::string	getTarget(void) const;

		virtual void	beSigned(const Bureaucrat&);
		void			createShrub(void);
		virtual void	execute(const Bureaucrat&);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);
	private:
		const std::string	_name;
//		std::string			_target;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
};

#endif
