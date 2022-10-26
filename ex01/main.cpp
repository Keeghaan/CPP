#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string buf;

	while (1)
	{
		std::cout << "SEARCH ? ADD ? EXIT ? : ";
		std::getline(std::cin, buf);
		std::cout << std::endl;
		if (!std::cin)
			return (1);
		if (!buf.length())
			;
		else if (!buf.compare("SEARCH"))
			phonebook.searchContact();
		else if (!buf.compare("ADD"))
			phonebook.addContact();
		else if (!buf.compare("EXIT"))
			return (2);
		std::cin.clear();
	}
	return (0);
}
