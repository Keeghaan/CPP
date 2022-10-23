#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Enter Weapon constructor " << std::endl;
	this->_type = setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor" << std::endl;
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string Weapon::getType(void) const
{
	return (this->_type);
}
