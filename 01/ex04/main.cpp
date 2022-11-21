#include "Sed.hpp"

int	check_args(std::string s1, std::string s2)
{
	if (!s1.length() && !s2.length())
	{
		std::cout << "This is not a good idea. Stop" << std::endl;
		return (1); 
	}
	else if (!s1.length() && s2.length())
	{
		std::cout << "You cannot replace nothing by \""
			<< s2.c_str() << "\"" << std::endl;
		return (2);
	}
	return (0);
}

std::string	replace(std::string &newFile, std::string s1, std::string s2)
{
	int	pos = 0;

	pos = newFile.find(s1.c_str());
	newFile.erase(newFile.find(s1.c_str()), s1.length());
	newFile.insert(pos, s2.c_str());
	return (newFile);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (-1);
	}
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		file = av[1];
	std::string		newFile;
	std::ifstream		infile;
	std::ofstream		outfile;

	if (check_args(s1, s2))
		return (-2);
	infile.open(file.c_str());
	if (!infile.is_open())
	{
		std::cout << "infile did not open correctly" << std::endl;
		return (1);
	}
	outfile.open(file.append(".replace").c_str(),
		std::fstream::in | std::ifstream::trunc);
	if (!outfile.is_open())
	{
		std::cout << "outfile did not open correctly" << std::endl;
		return (infile.close(), 2);
	}
	while (getline(infile, newFile))
	{
			while (newFile.find(s1.c_str(), 0) != std::string::npos)
				replace(newFile, s1, s2);
			outfile << newFile.c_str() << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
