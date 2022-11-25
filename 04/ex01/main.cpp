/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:44:25 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 20:28:03 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

# define NUM 4

int main()
{
	{
		const Animal	*one = new Cat();
		const Animal	*two = new Dog();
	
		delete two;
		delete one;
	}
	std::cout << std::endl << std::endl;
	{
		std::cout << "Nb of animals : " << NUM << std::endl << std::endl;
		int	i = 0;
		if (NUM % 2 == 0 && NUM > 1)
		{
			Animal	*animal[NUM] = {0};

			for (;i < NUM / 2; i++)
				animal[i] = new Cat();
			for (;i < NUM; i++)
				animal[i] = new Dog();
			std::cout << std::endl;
			for (i = NUM - 1; i >= 0 ; i--)
				delete animal[i];
		}
		else if (NUM > 0 && NUM < INT_MAX)
		{
			int newNum = NUM + 1;
			std::cout << "Nb of animals : " << newNum << std::endl << std::endl;
			Animal	*animal[NUM] = {0};

			for (;i < newNum / 2; i++)
				animal[i] = new Cat();
			for (;i < newNum; i++)
				animal[i] = new Dog();
			std::cout << std::endl;
			for (i = newNum - 1; i >= 0; i--)
				delete animal[i];
		}
		else
			std::cout << "Define a NUM > 0 & < INT_MAX please" << std::endl;
	}
	return 0;
}
