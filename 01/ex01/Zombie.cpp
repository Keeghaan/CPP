#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	setName(name);
	return ;
}

Zombie::Zombie(void)
{
	this->_name = "Unknown";
}

Zombie::~Zombie(void)
{
	std::cout << "Looks like " << getName();
	std::cout << "'s blasting off again" << std::endl;
	return ;
}

void Zombie::setName(std::string name)
{
	if (name.empty())
		std::cout << "test" << std::endl;
	if (!name.length())
		this->_name = "Unknown";
	else
		this->_name = name;
}

std::string	Zombie::getName(void) const
{
	return this->_name;
}

void Zombie::announce(void)
{
	std::cout << getName() << ":BraiiiiiiinnnzzzZ..." << std::endl;
}
