/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:53:45 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 17:25:44 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	double	tmp = rand() / static_cast<double>(RAND_MAX);
	int	nRand = 1 + static_cast<int>(tmp * (10 - 1));
	Base	*base;
	
	std::cout << nRand << std::endl;
	switch (nRand)
	{
		case (1):
			base = new A;
			break ;
		case (2):
			base = new B;
			break ;
		case (3):
			base = new A;
			break ;
		case (4):
			base = new A;
		case (5):
			base = new B;
			break ;
		case (6):
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
	std::string	tmp = typeid(p).name();

	tmp.erase(tmp.begin());
	std::cout << "This is a class " << tmp << std::endl;
}
