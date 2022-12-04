#include "Array.tpp"

int	main(void)
{
	Array<int>	voidArr;
	Array<int>	intArr(5);

	std::cout << std::endl;
	std::cout << "Void array of size " << voidArr.size() << " : " << voidArr << std::endl << std::endl;	
	std::cout << "Int array of size " << intArr.size() << " : " << std::endl << intArr << std::endl;	
	try
	{
		for (unsigned int i = 0; i < intArr.size(); i++)
			std::cout << intArr[i] << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Array<char>	charArr(7);
	try
	{
		for (unsigned int i = 0; i < charArr.size() + 1; i++)
			std::cout << charArr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	Array<int>		testArr(intArr);
	try
	{
		for (unsigned int i = 0; i < testArr.size(); i++)
			std::cout << testArr[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
