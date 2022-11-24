/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:35:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 17:24:07 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	test("Ola");
	ClapTrap	clap("");
	ScavTrap	trap("Boo");
	ScavTrap	scav("Lynette");
	FragTrap	frag("Tony");
	FragTrap	nope("John");

	std::cout << "Name : " << test.getName() << std::endl;
	std::cout << "Hit Points : " << test.getHit() << std::endl;
	std::cout << "Energy Points : " << test.getEn() << std::endl;
	std::cout << "Attack Damage : " << test.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << clap.getName() << std::endl;
	std::cout << "Hit Points : " << clap.getHit() << std::endl;
	std::cout << "Energy Points : " << clap.getEn() << std::endl;
	std::cout << "Attack Damage : " << clap.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << trap.getName() << std::endl;
	std::cout << "Hit Points : " << trap.getHit() << std::endl;
	std::cout << "Energy Points : " << trap.getEn() << std::endl;
	std::cout << "Attack Damage : " << trap.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << scav.getName() << std::endl;
	std::cout << "Hit Points : " << scav.getHit() << std::endl;
	std::cout << "Energy Points : " << scav.getEn() << std::endl;
	std::cout << "Attack Damage : " << scav.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << frag.getName() << std::endl;
	std::cout << "Hit Points : " << frag.getHit() << std::endl;
	std::cout << "Energy Points : " << frag.getEn() << std::endl;
	std::cout << "Attack Damage : " << frag.getDam() << std::endl;
	std::cout << std::endl;
	std::cout << "Name : " << nope.getName() << std::endl;
	std::cout << "Hit Points : " << nope.getHit() << std::endl;
	std::cout << "Energy Points : " << nope.getEn() << std::endl;
	std::cout << "Attack Damage : " << nope.getDam() << std::endl;
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
	trap.guardGate();
	scav.attack(clap.getName());
	clap.takeDamage(scav.getDam());
	scav.beRepaired(6);
	std::cout << std::endl;
	frag.attack(nope.getName());
	frag.highFivesGuys();
	nope.takeDamage(frag.getDam());
	return (0);
}
