#include "Zombie.hpp"

void	killZombies(Zombie **horde, int count)
{
	for (int i = 0; i < count; i++)
		delete horde[i];
	delete[] horde;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zomboy = Zombie::newZombie(name);

	zomboy->count = N;
	zomboy->horde = new Zombie*[N];
	for (int i = 0; i < N; i++)
		zomboy->horde[i] = Zombie::newZombie(name);
	return (zomboy);
}
