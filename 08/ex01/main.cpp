/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:44:31 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/08 15:01:41 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

# define MAX 20
int	main(void)
{
	{	
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span tmp = Span(MAX);
		Span sp = Span(MAX);
	//	Span test = sp;

		tmp.randInit(MAX);
		std::vector<int> vtmp = tmp.getVector();
	//	randInit(&tmp, MAX);
		sp.addMoreNumber(vtmp.begin(), vtmp.end());

	/*	sp.addNumber(-2147483648);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(53);
		sp.addNumber(110);
		sp.addNumber(2147483647);*/


		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << std::endl << "Content : " << std::endl << sp << std::endl;
	}
	return 0;
}
