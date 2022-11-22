#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << std::endl;
		std::cout << "In the function zombieHorde: ";
		std::cout << "A horde of " << N << " ? Really ?" << std::endl;
		std::cout << std::endl;
		return (NULL);
	}
	if (!name.length())
		name = "Unknown";
	Zombie	*zomboy = new Zombie[N];
	for (int i = 0; i < N; i++)
		zomboy[i].setName(name);
	return (zomboy);
}
