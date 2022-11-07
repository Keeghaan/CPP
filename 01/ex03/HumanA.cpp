#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	HumanA::setName(name);
	std::cout << "constructor" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor" << std::endl;
	return ;
}

std::string	HumanA::getName(void) const
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
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
	std::cout << getName() << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
