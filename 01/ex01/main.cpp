#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(5, "Keeghaan");

	for (int i = 0; i < 5; i++)
		horde->horde[i]->announce();
	killZombies(horde->horde, horde, horde->count);
	return (0);
}
