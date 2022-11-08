#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zomboy = new Zombie(name);
	return (zomboy);	
}

void killZombies(Zombie **horde, Zombie *zomboy, int count)
{
	for (int i = 0; i < count; i++)
		delete horde[i];
	delete [] horde;
	delete zomboy;
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zomboy = newZombie(name);

	zomboy->count = N;
	zomboy->horde = new Zombie*[N];
	for (int i = 0; i < N; i++)
		zomboy->horde[i] = newZombie(name);
	return (zomboy);
}
