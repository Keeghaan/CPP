/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:09:41 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/07 13:42:27 by jcourtoi         ###   ########.fr       */
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

# define RED "\e[0;31m"
# define NC "\033[0m"
# define CRED(x) RED x NC
# define DEBUG 1

//template <class T, size_t Extent=std::dynamic_extent>
class	Span
{
	public:
		Span(const unsigned int);
		Span(const Span&);
		virtual ~Span(void);

		
		unsigned int	getMax(void) const;

		void			addNumber(unsigned int);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		void	search2ndSmallest(unsigned int);

		class	MaxReachedException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class	EmptyException: public std::exception
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
		Span(void);
};

#endif
