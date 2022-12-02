/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:53:45 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:04:35 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int	nRand = rand() % 3;
	Base	*base;
	
	switch (nRand)
	{
		case (1):
			base = new A;
			break ;
		case (2):
			base = new B;
			break ;
		default:
			base = new C;
	}
	return (base);
}

void	identify(Base *p)
{
	A	*tmpA = dynamic_cast<A*>(p);
	if (tmpA)
	{
		std::cout << "This is a class A" << std::endl;
		return ;
	}
	B	*tmpB = dynamic_cast<B*>(p);
	if (tmpB)
	{
		std::cout << "This is a class B" << std::endl;
		return ;
	}
	C	*tmpC = dynamic_cast<C*>(p);
	if (tmpC)
		std::cout << "This is a class C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A tmpA = dynamic_cast<A&>(p);
		std::cout << "This is a class A" << std::endl;
	}
	catch (const std::exception &eA) {}
	try
	{
		B tmpB = dynamic_cast<B&>(p);
		std::cout << "This is a class B" << std::endl;
	}
	catch (const std::exception &eB) {}
	try
	{
		C tmpC = dynamic_cast<C&>(p);
		std::cout << "This is a class C" << std::endl;
	}
	catch (const std::exception &eC) {}
}
