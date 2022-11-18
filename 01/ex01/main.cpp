#include "Zombie.hpp"

int	main(void)
{
	int	zombs = 2;
	int	horde_n = 5;
	char	zomb_name[] = "Luke";
	char	horde_name[] = "Keeghaan";
	char	uniq_name[] = "Remy";
	Zombie	*zomb = new Zombie[zombs];
	Zombie*	zomboy	= new Zombie("Zomboy");
	Zombie	uniq(uniq_name);
	Zombie	*horde = zombieHorde(horde_n, horde_name);
	
	std::cout << "------> The one and only UNIQUE " << uniq.getName() << std::endl;
	uniq.announce();
	std::cout << std::endl << std::endl << "------> There are " << zombs << " cute zombies named " << zomb_name << std::endl;
	for (int i = 0; i < zombs; i++)
	{
		zomb[i].setName(zomb_name);
		zomb[i].announce();
	}
	std::cout << std::endl << "------> " << zomboy->getName() << "'s in the place !" << std::endl;
	zomboy->announce();
	std::cout << std::endl << "-----> Here comes the " << horde_name << "s horde ! " << horde_n << " of them !" << std::endl;
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete[] horde;
	std::cout << std::endl;
	delete zomboy;
	std::cout << std::endl;
	delete[] zomb;
	std::cout << std::endl;
	return (0);
}
