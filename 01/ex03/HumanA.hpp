#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	setWeapon(Weapon weapon);
		Weapon 	getWeapon(void) const;
		void	attack();
	private :
		Weapon		_weapon;
		std::string	_name;
};

#endif
