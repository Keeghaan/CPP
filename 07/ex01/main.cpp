#include <climits>
#include <cfloat>
#include "iter.hpp"

//INT
static void	initArray(int &i)
{
	i = 23;
}

static void fillArray(int &i)
{
	static int	n = 0;

	if (n == INT_MAX)
		n = 0;
	i = n++;
}

//FLOAT
static void	initArray(float &i)
{
	i = 7.5f;
}

static void fillArray(float &i)
{
	static int	n = 0.1f;

	if (n >= FLT_MAX - 1)
		n = 0.1f;
	i = n + 0.1;
	n++;
}

//DOUBLE
static void	initArray(double &i)
{
	i = 2.5;
}

static void fillArray(double &i)
{
	static int	n = 0.1;

	if (n >= DBL_MAX - 1)
		n = 0.1;
	i = n + 0.1;
	n++;
}

//CHAR
static void	initArray(char &i)
{
	i = 'y';
}

static void fillArray(char &i)
{
	static int	n = 32;

	if (n == 126)
		n = 32;
	i = n++;
}

//STD::STRING
static void	initArray(std::string &i)
{
	i = std::string("Hello there");
}

static void fillArray(std::string &i)
{
	i = std::string("Im not gonna iterate a string");
}

int	main(void)
{	
	//INT
	std::cout << "-----------------INT-----------------" << std::endl;
	{
		std::size_t	size = 10;
		int		array[size] = { 0 };
	
		iter<int>(array, size, initArray);
		iter(array, size, printArray);
		std::cout << std::endl;
		iter<int>(array, size, fillArray);
		iter(array, size, printArray);
	}
	std::cout << std::endl;
	//FLOAT
	std::cout << "-----------------FLOAT-----------------" << std::endl;
	{
		std::size_t	size = 10;
		float		array[size] = { 0.0f };
	
		iter<float>(array, size, initArray);
		iter(array, size, printArray);
		std::cout << std::endl;
		iter<float>(array, size, fillArray);
		iter(array, size, printArray);
	}
	std::cout << std::endl;
	//DOUBLE
	std::cout << "-----------------DOUBLE-----------------" << std::endl;
	{
		std::size_t	size = 10;
		double		array[size] = { 0.0 };
	
		iter<double>(array, size, initArray);
		iter(array, size, printArray);
		std::cout << std::endl;
		iter<double>(array, size, fillArray);
		iter(array, size, printArray);
	}
	std::cout << std::endl;
	//CHAR
	std::cout << "-----------------CHAR-----------------" << std::endl;
	{
		std::size_t	size = 10;
		char		array[size] = {};
	
		iter<char>(array, size, initArray);
		iter(array, size, printArray);
		std::cout << std::endl;
		iter<char>(array, size, fillArray);
		iter(array, size, printArray);
	}
	std::cout << std::endl;
	//STD::STRING
	std::cout << "-----------------STD::STRING-----------------" << std::endl;
	{
		std::size_t	size = 10;
		std::string	array[size] = {};
	
		iter<std::string>(array, size, initArray);
		iter(array, size, printArray);
		std::cout << std::endl;
		iter<std::string>(array, size, fillArray);
		iter(array, size, printArray);
	}
	std::cout << std::endl;
	return (0);
}
