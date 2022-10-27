/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:12:06 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/27 13:45:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->count = 0;
	this->full = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

Contact	PhoneBook::getContact(int index) const
{
	return (this->_contacts[index]);
}

void	PhoneBook::setContact(Contact contact, int index)
{
	this->_contacts[index] = contact;
}

bool	PhoneBook::getInfo(std::string tmp[5], int index)
{
	std::string	choice;

	if (index < 0 || index > 8)
		return (false);
	if (index == 8)
	{
		std::cout << "Full phonebook, add another contact will erase the last one" << std::endl;
		std::cout << "Are you sure ? (Y to continue/Any other key to stop): ";
		std::getline(std::cin, choice);
		if (!std::cin)
			return (false);
		if (choice.compare("Y") != 0)
			return (false);
	}
	enterEntry("First Name : ", tmp, 0);
	enterEntry("Last Name : ", tmp, 1);
	enterEntry("Nickname : ", tmp, 2);
	enterEntry("Phone Number : ", tmp, 3);
	enterEntry("Darkest Secret : ", tmp, 4);
	return (true);
}

void	PhoneBook::addContact(void)
{
	std::string	tmp[5];
	int		index;

	index = this->count;
	if (this->full)
		index = 8;
	if (getInfo(tmp, index) == true)
	{
		this->_contacts[this->count].addNewContact(tmp, this->count);
		if (this->count < 7)
			this->count++;
		else
			this->full = 1;
	}
}

void	PhoneBook::searchContact(void)
{
	std::string	buf;
	int		j;
	int		index;

	if (this->count == 0)
		std::cout << "Empty Phonebook" << std::endl;
	else
	{
		for (j = 0 ; j < this->count; j++)
			this->_contacts[j].printContact(j);
		if (this->full)
			this->_contacts[j].printContact(j);
		std::cout << "Enter an index: ";
		std::getline(std::cin, buf);
		std::cout << std::endl;
		if (!std::cin)
			return ;
		index = this->count;
		if (this->full)
			index = 8;
		if (valid_index(buf, index) == true)
			this->_contacts[std::atoi(buf.c_str()) - 1].printOneContact();
	}
}
