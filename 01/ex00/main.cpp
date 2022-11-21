#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomboy = newZombie("Johanna");
	if (!zomboy)
		return (1);
	Zombie	*ho = newZombie("Tom");
	if (!ho)
	return (delete zomboy, 2);

	zomboy->announce();
	ho->announce();
	randomChump("Elvis");
	delete ho;
	delete zomboy;
	return (0);
}
