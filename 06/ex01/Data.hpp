#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

struct	Data
{
	int		n;
	std::string	s;
};

uintptr_t	serialize(Data*);
Data		*deserialize(uintptr_t);

#endif
