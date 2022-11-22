#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomboy = newZombie("Johanna");
	Zombie	*ho = newZombie("Tom");

	zomboy->announce();
	ho->announce();
	randomChump("Elvis");
	delete ho;
	delete zomboy;
	return (0);
}
