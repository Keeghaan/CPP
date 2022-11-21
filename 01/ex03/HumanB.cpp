#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	std::cout << "Enter the human B constructor" << std::endl;
	setName(name);
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Enter the human B destructor" << std::endl;
	return ;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::setName(std::string name)
{
	if (name.empty())
		this->_name = "Unknown dude B";
	else
		this->_name = name;
}

Weapon	HumanB::getWeapon(void) const
{
	return (*this->_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << getName() << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}
