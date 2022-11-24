/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:35:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 13:10:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("Ola");
	ClapTrap	clap("");
	ClapTrap	trap("Boo");
	
	std::cout << "Name : " << test.getName() << std::endl;
	std::cout << "Hit Points : " << test.getHit() << std::endl;
	std::cout << "Energy Points : " << test.getEn() << std::endl;
	std::cout << "Attack Damage : " << test.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << test.getName() << std::endl;
	std::cout << "Hit Points : " << test.getHit() << std::endl;
	std::cout << "Energy Points : " << test.getEn() << std::endl;
	std::cout << "Attack Damage : " << test.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << test.getName() << std::endl;
	std::cout << "Hit Points : " << test.getHit() << std::endl;
	std::cout << "Energy Points : " << test.getEn() << std::endl;
	std::cout << "Attack Damage : " << test.getDam() << std::endl;
	std::cout << std::endl;

	test.attack("Tom");
	test.takeDamage(3);
	test.beRepaired(214);
	test.takeDamage(2);
	std::cout << std::endl;
	clap.attack(test.getName());
	test.takeDamage(clap.getDam());
	clap.takeDamage(313);
	clap.beRepaired(2147483649);
	clap.takeDamage(0);
	std::cout << std::endl;
	trap.attack("Freddy");
	trap.takeDamage(6);
	trap.beRepaired(1);
	trap.takeDamage(214);
	trap.takeDamage(1);
	std::cout << std::endl;
	return (0);
}
