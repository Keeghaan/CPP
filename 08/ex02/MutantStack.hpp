/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:13:00 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/07 17:49:16 by jcourtoi         ###   ########.fr       */
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
/*
class Iterator : public std::iterator<std::input_iterator_tag, int>
{
	public:
		Iterator(int* x) :p(x) {}
		Iterator(const MyIterator& mit) : p(mit.p) {}
			private:
		int	*p;
};
*/
template < class T >//, class Container = std::deque<T> >
class MutantStack: public std::stack<int>
{
	public:
		MutantStack(void){};
		MutantStack(const MutantStack&){};
		virtual ~MutantStack(void){};
		
		MutantStack	&operator=(const MutantStack&);
		MutantStack	&operator++() {++_p;return *this;}
		MutantStack	&operator++(int) {MutantStack &tmp(*this); operator++(); return tmp;}
		bool operator==(const MutantStack& rhs) const {return _p==rhs._p;}
		bool operator!=(const MutantStack& rhs) const {return _p!=rhs._p;}
		int& operator*() {return *_p;}
	private:
		int	*_p;

};

#endif
