#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = setName(name);
	std::cout << "constructor" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "destructor" << std::endl;
	return ;
}

Weapon	HumanB::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}
