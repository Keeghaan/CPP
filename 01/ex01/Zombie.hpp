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
		Zombie	**horde;

		Zombie(std::string name);
		~Zombie(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	announce(void);
		void	randomChump(std::string name);
		static Zombie	*newZombie(std::string name);
		static Zombie	*zombieHorde(int N, std::string name);
		static void	killZombies(Zombie **horde, int count);
	private :
		std::string	_name;
};


#endif
