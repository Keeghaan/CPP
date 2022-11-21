#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zomboy = new Zombie(name);
	if (!zomboy)
	{
		std::cout << "Allocation failed in newZombie func" << std::endl;
		return (NULL);
	}
	return (zomboy);	
}
