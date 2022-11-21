#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	std::cout << "Enter the Human A constructor" << std::endl;
	HumanA::setName(name);
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Enter the Human B constructor" << std::endl;
}

std::string	HumanA::getName(void) const
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	if (name.empty())
		this->_name = "Unknown dude A";
	else
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
