/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:13:00 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/08 13:01:48 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>
# include <algorithm>
# include <deque>
# include <iterator>

# define DEBUG 1

template< class T, class Container = std::deque<T> >
//template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(const MutantStack<T> &copy) {*this = copy;};
		virtual ~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) { return (this->c.begin()); };
		iterator end(void) { return (this->c.end()); };

		MutantStack<T>	&operator=(const MutantStack<T> &rhs) { this->c = rhs.c; };
};

#endif
