#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zomboy = new Zombie(name);
	return (zomboy);	
}
