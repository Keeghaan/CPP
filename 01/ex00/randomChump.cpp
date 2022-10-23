#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie theChump(name);
	theChump.announce();
}
