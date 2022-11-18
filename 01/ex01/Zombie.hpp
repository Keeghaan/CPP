#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Zombie
{
	public :
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	announce(void);
	private :
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
