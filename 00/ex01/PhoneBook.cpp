/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:12:06 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/26 16:06:03 by jcourtoi         ###   ########.fr       */
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
