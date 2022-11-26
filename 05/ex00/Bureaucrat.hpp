/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:20:35 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 15:02:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <iostream>
# include <string>

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

		Bureaucrat	&operator=(const Bureaucrat&);
		Bureaucrat	&operator++(int);
		Bureaucrat	&operator--(int);
	private:
		const std::string	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream&, const Bureaucrat&);

#endif
