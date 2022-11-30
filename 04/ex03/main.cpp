/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:46:23 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 14:34:22 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	main(void)
{
	{
		AMateria	*ice = new Ice();
		AMateria	*cure = new Cure();
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(ice);
		src->learnMateria(cure);
		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");	
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	{
		AMateria	*ice = new Ice();
		AMateria	*cure = new Cure();
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(ice);
		src->learnMateria(cure);
		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		AMateria	*test = tmp;
		test = src->createMateria("cure");
		ICharacter* bob = new Character("bob");
		bob->equip(test);
		me->use(0, *bob);
		std::cout << std::endl;
		me->use(1, *bob);
		std::cout << std::endl;
		bob->use(0, *me);
		std::cout << std::endl;
		std::cout << "try to unequip an invalid slot : " << std::endl;
		me->unequip(2);
		std::cout << "try to unequip a valid slot : " << std::endl;
		me->unequip(0);
		std::cout << "The unequiped slot has been replaced by the next one: " << std::endl;
		me->use(0, *bob);
		me->use(1, *me);
		me->use(0, *me);
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
