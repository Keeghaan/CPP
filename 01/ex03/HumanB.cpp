#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(0)
{
	setName(name);
	std::cout << "constructor" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "destructor" << std::endl;
	return ;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

Weapon	*HumanB::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanB::setWeapon(Weapon weapon)
{
	if (!this->_weapon)
		this->_weapon = new Weapon(weapon.getType());
}

void	HumanB::attack(void)
{
	std::cout << getName() << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}
