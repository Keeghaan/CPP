/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:20:35 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:55:31 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <iostream>
# include <string>
# include <stdexcept>

# define DEBUG 1

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat(const std::string, unsigned);
		virtual ~Bureaucrat(void);

		const std::string		getName(void) const;
		unsigned int	getGrade(void) const;

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					std::cout << "this grade is too high" << std::endl;
					return ("too high");
				}
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what(void) const throw()
				{
					std::cout << "This grade is too low" << std::endl;
					return ("too low");
				}
		};

		void	promote(void);
		void	demote(void);

		Bureaucrat	&operator=(const Bureaucrat&);
		Bureaucrat	&operator++(int);
		Bureaucrat	&operator--(int);
	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream&, const Bureaucrat&);

#endif
