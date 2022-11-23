/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:35:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 18:41:03 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("test");

	std::cout << "Name : " << test.getName() << std::endl;
	std::cout << "Hit Points : " << test.getHit() << std::endl;
	std::cout << "Energy Points : " << test.getEn() << std::endl;
	std::cout << "Attack Damage : " << test.getDam() << std::endl;
	return (0);
}
