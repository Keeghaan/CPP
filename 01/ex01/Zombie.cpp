#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Looks like " << this->_name;
	std::cout << "'s blasting off again" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

