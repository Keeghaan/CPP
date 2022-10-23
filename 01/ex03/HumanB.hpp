#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB(std::string name);
		~HumanB(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	setWeapon(Weapon weapon);
		Weapon	getWeapon(void) const;
		void	attack(void);
	private :
		Weapon		_weapon;
		std::string	_name;
};

#endif
