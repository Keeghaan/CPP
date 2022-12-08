/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:36:50 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/08 15:00:42 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <ctime>
# include <cstdlib>

# define DEBUG 1
# define RED "\e[0;31m"
# define YL "\e[0;33m"
# define GRN "\e[0;32m"
# define NC "\033[0m"
# define CRED(x) RED x NC 

template <typename T>
class	Array
{
	public:
		Array(void);
		Array(unsigned int);
		Array(const Array&);
		virtual ~Array(void);

		T		*getArray(void) const;
		T		getArray(unsigned int) const;		
		unsigned int	size(void) const;
		class	NotAccessibleCaseException: public std::exception
		{
			public:
				const char	*what(void) const throw();	
		};

		Array<T>	&operator=(const Array<T>&);
		T		&operator[](unsigned int);
	private:
		T		*_array;
		unsigned int	_size;
		
};

template <typename T>
std::ostream	&operator<<(std::ostream &out, const Array<T>&);

#endif
