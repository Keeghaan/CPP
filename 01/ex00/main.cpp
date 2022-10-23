#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomboy = newZombie("Johanna");
	randomChump("Elvis");
	Zombie	*ho = newZombie("Tom");

	zomboy->announce();
	ho->announce();
	delete ho;
	delete zomboy;
	return (0);
}
