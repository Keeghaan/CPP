# include "easyfind.tpp"

int	main(void)
{
	std::list<int> test;

	test.push_back(2);
	test.push_back(6);
	test.push_back(23);
	test.push_back(1);
	test.push_back(7);
	test.push_back(89);

	try
	{
		easyfind(test, 23);
		easyfind(test, 2147483647);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
