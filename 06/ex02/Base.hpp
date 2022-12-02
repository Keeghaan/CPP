/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:49:33 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 16:57:12 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <typeinfo>
# include <ctime>
# include <cstdlib>

class	Base
{
	public:
		virtual ~Base(void) {};
};

class	A: public Base {};
class	B: public Base {};
class	C: public Base {};

Base	*generate(void);
void	identify(Base*);
void	identify(Base&);

#endif
