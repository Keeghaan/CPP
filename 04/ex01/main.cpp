/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:44:25 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 19:10:55 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *animal = new Animal[10]();

		std::cout << animal[2].getType() << " " << std::endl;
		std::cout << animal[6].getType() << " " << std::endl;
		animal[2].makeSound(); //will output the cat sound!
		animal[6].makeSound();
	
		delete[] animal;
	}
	return 0;
}
