#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
void	iter(const T *array, std::size_t size, void(*f)(const T&))
{
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	iter(T *array, std::size_t size, void(*f)(T&))
{
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void printArray(const T &i)
{
	std::cout << i << std::endl;
};

#endif
