#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <list>
# include <algorithm>

# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define NC "\033[0m"
# define CRED(x) RED x NC
class	NotFoundException: public std::exception
{
	public:
		const char *what(void) const throw()
		{
			return (CRED("Int not found"));
		};
};

#endif
