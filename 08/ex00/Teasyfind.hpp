#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator found = std::find(t.begin(), t.end(), i);
	if (found == t.end())
		throw NotFoundException();
	return (found);
}
