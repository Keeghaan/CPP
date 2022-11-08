#include "Sed.hpp"

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string	s3;

	s3 = av[1];
	s1 = av[2];
	s2 = av[3];
	if (ac != 4)
		return (1);
	//valid args ?
	while(s3.c_str())
	{
		if (!strcmp(s3.c_str(), s1.c_str()))
		{
			s3.erase();
		}
	}
	std::cout << s3.c_str;
	return (0);
}
