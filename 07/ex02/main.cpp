/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:37:00 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/05 12:38:35 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

#define MAX_VAL 750
int main(int, char**)
{
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();

			numbers[i] = value;
			mirror[i] = value;
	}
	//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
	    {
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
	        std::cerr << e.what() << '\n';
	    }
	
	    for (int i = 0; i < MAX_VAL; i++)
	    {
	        numbers[i] = rand();
	    }
	    delete [] mirror;//
	}
	std::cout << std::endl << std::endl;
	{
		Array<int>	voidArr;
		Array<int>	intArr(5);

		std::cout << std::endl;
		std::cout << "Void array of size " << voidArr.size() << " : "
			<< voidArr << std::endl << std::endl;	
		std::cout << "Int array of size " << intArr.size() << " : "
			<< std::endl << intArr << std::endl;	
		try
		{
			for (unsigned int i = 0; i < intArr.size(); i++)
				std::cout << intArr[i] << std::endl; 
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		Array<char>	charArr(7);
		try
		{
			for (unsigned int i = 0; i < charArr.size() + 1; i++)
				std::cout << charArr[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		Array<int>		testArr(intArr);
		try
		{
			for (unsigned int i = 0; i < testArr.size(); i++)
				std::cout << testArr[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
	return 0;
}
