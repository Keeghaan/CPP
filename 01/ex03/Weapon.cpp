#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Enter Weapon constructor" << std::endl;
	setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor" << std::endl;
	return ;
}

void	Weapon::setType(std::string type)
{
	if (type.empty())
		this->_type = "Unknown weapon";
	else
		this->_type = type;
}

std::string Weapon::getType(void) const
{
	return (this->_type);
}
