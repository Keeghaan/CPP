#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	cutName(std::string name)
{
	if (name.length() > 9)
		return (name.substr(0, 9) + ".");
	return (name);
}

void	Contact::printContact(int index)
{
	if (index == 0)
	{
		std::cout<< "|" << std::setw(5) << "INDEX" << "|" << std::setw(10) << "FIRST NAME";
		std::cout << "|" << std::setw(10) << "LAST NAME" << "|";
		std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	}
	std::cout << "|" << std::setw(5) << index + 1 << "|" << std::setw(10) << cutName(_name) << "|";
	std::cout << std::setw(10) << cutName(_lastName)  << "|";
	std::cout << std::setw(10) << cutName(_nickname) << "|" << std::endl;
}

void	Contact::printOneContact(void)
{
	std::cout << "FULL NAME: " << this->_name << std::endl;
	std::cout << "LAST NAME: " << this->_lastName << std::endl;
	std::cout << "NICKNAME: " << this->_nickname << std::endl;
	std::cout << "PHONE NUMBER: " << this->_phoneNumber << std::endl;
	std::cout << "DARKEST SECRET: " << this->_darkestSecret << std::endl;
}

void	Contact::addNewContact(std::string tmp[5], int index)
{
	_name = tmp[0];
	_lastName = tmp[1];
	_nickname = tmp[2];
	_phoneNumber = tmp[3];
	_darkestSecret = tmp[4];
	this->index = index;
}
