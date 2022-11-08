#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Zombie
{
	public :
		int	count;

		Zombie(std::string name);
		~Zombie(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	announce(void);
	private :
		std::string	_name;
		Zombie	*_horde;
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
void	killZombies(Zombie **horde, Zombie *zombie, int count);
#endif
