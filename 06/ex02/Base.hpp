/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:49:33 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:02:48 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <cstring>
# include <exception>
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
