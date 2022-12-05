#include <climits>
#include <cfloat>
#include "iter.hpp"

#define SIZE 10

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
	static float n = 0.1f;

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
	static double	n = 0.1;

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
	static char	n = 32;

	if (n == 126)
		n = 32;
	i = n++;
}

void	squareCase(char &i)
{
	if (i + i > 126)
		std::cout << "not printable" << std::endl;
	i += i;
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

void	squareCase(std::string &i)
{
	i = std::string("Cannot get a string square");
}

int	main(void)
{
	//INT
	std::cout << "-----------------INT-----------------" << std::endl;
	{
		int		array[SIZE] = { 0 };
	
		iter<int>(array, SIZE, initArray);
		iter(array, SIZE, printArray);
		std::cout << std::endl;
		iter<int>(array, SIZE, fillArray);
		iter<int>(array, SIZE, printArray);
		std::cout << std::endl;
		iter<int>(array, SIZE, squareCase);
		iter(array, SIZE, printArray);
	}
	std::cout << std::endl;
	//FLOAT
	std::cout << "-----------------FLOAT-----------------" << std::endl;
	{
		float	array[SIZE] = { 0.0f };
	
		iter<float>(array, SIZE, initArray);
		iter(array, SIZE, printArray);
		std::cout << std::endl;
		iter<float>(array, SIZE, fillArray);
		iter<float>(array, SIZE, printArray);
		std::cout << std::endl;
		iter<float>(array, SIZE, squareCase);
		iter(array, SIZE, printArray);
	}
	std::cout << std::endl;
	//DOUBLE
	std::cout << "-----------------DOUBLE-----------------" << std::endl;
	{
		double	array[SIZE] = { 0.0 };
	
		iter<double>(array, SIZE, initArray);
		iter(array, SIZE, printArray);
		std::cout << std::endl;
		iter<double>(array, SIZE, fillArray);
		iter<double>(array, SIZE, printArray);
		std::cout << std::endl;
		iter<double>(array, SIZE, squareCase);
		iter(array, SIZE, printArray);
	}
	std::cout << std::endl;
	//CHAR
	std::cout << "-----------------CHAR-----------------" << std::endl;
	{
		char	array[SIZE] = {};
	
		iter<char>(array, SIZE, initArray);
		iter(array, SIZE, printArray);
		std::cout << std::endl;
		iter<char>(array, SIZE, fillArray);
		iter<char>(array, SIZE, printArray);
		std::cout << std::endl;
		std::cout << "A square of printable char won't be printable so we're gonna sum it with itself instead" << std::endl;
		iter<char>(array, SIZE, squareCase);
		iter(array, SIZE, printArray);
	}
	std::cout << std::endl;
	//STD::STRING
	std::cout << "-----------------STD::STRING-----------------" << std::endl;
	{
		std::string	array[SIZE] = {};
	
		iter<std::string>(array, SIZE, initArray);
		iter(array, SIZE, printArray);
		std::cout << std::endl;
		iter<std::string>(array, SIZE, fillArray);
		iter<std::string>(array, SIZE, printArray);
		std::cout << std::endl;
		iter<std::string>(array, SIZE, squareCase);
		iter(array, SIZE, printArray);
	}
	std::cout << std::endl;
	return (0);
}
