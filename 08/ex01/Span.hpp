/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:09:41 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/08 15:01:28 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <list>
# include <vector>
# include <span>
# include <utility>
# include <climits>
# include <ctime>
# include <cstdlib>

# define RED "\e[0;31m"
# define NC "\033[0m"
# define CRED(x) RED x NC
# define DEBUG 2 //0 No debug msg | 1 Constructor & Destructor | 2 Other debug msgs
# define MAXIMUM 200000

class	Span
{
	public:
		Span(const unsigned int);
		Span(const Span&);
		virtual ~Span(void);

		unsigned int	getSize(void) const;
		unsigned int	getMax(void) const;
		int				getContent(unsigned int) const;
		void			addNumber(unsigned int);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		void			addMoreNumber(unsigned int);

		class	MaxReachedException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class	TooMuchException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class	NotEnoughToCompareException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		Span	&operator=(const Span&);
	private:
		const unsigned int	_nMax;
		std::vector<int>	_stock;
		unsigned int		_size;
		Span(void);
};

std::ostream	&operator<<(std::ostream&, const Span&);

#endif
