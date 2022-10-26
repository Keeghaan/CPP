#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getName(void) const
{
	return (this->_name);
}

void	Contact::setName(std::string name)
{
	this->_name = name;
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
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
		std::cout<< "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRST NAME";
		std::cout << "|" << std::setw(10) << "LAST NAME" << "|";
		std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	}
	std::cout << "|" << std::setw(5) << index + 1 << "|" << std::setw(10) << cutName(_name) << "|";
	std::cout << std::setw(10) << cutName(_lastName)  << "|";
	std::cout << std::setw(10) << cutName(_nickname) << "|" << std::endl;
}

void	Contact::printOneContact(void)
{
	std::cout << "FULL NAME: " << getName() << std::endl;
	std::cout << "LAST NAME: " << getLastName() << std::endl;
	std::cout << "NICKNAME: " << getNickname() << std::endl;
	std::cout << "PHONE NUMBER: " << getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET: " << getDarkestSecret() << std::endl;
}

void	Contact::addNewContact(std::string tmp[5], int index)
{
	setName(tmp[0]);
	setLastName(tmp[1]);
	setNickname(tmp[2]);
	setPhoneNumber(tmp[3]);
	setDarkestSecret(tmp[4]);
	this->index = index;
}
