#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = setName(name);
	this->_weapon = setWeapon(weapon);
	std::cout << "constructor" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor" << std::endl;
	return ;
}

Weapon	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}
