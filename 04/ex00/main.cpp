/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:44:25 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:59:47 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	animal;
	Dog		silva;
	Cat		grignotte;
	
	std::cout << silva.getType() << " and " << grignotte.getType() << " (" << animal.getType() << std::endl;
//	silva.makeSound();
//	grignotte.makeSound();

	return 0;
}
