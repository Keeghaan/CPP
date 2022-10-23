#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = Zombie::zombieHorde(5, "Johanna");
	Zombie::killZombies(horde->horde, horde->count);
	return (0);
}
