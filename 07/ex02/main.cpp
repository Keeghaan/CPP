#include "TArray.hpp"

int	main(void)
{
	Array<int>	intArr;
	
	std::cout << intArr;
	try
	{
		for (unsigned int i = 0; i < intArr.getSize(); i++)
			std::cout << intArr[i] << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
