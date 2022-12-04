#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <array>
# include <vector>
# include <list>

class	NotFoundException: public std::exception()
{
	public:
		const char *what(void) const throw()
		{
			return ("Int not found");
		};
};

#endif
