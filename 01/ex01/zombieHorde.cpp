#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zomboy = new Zombie[N];

	for (int i = 0; i < N; i++)
		zomboy[i].setName(name);
	return (zomboy);
}
