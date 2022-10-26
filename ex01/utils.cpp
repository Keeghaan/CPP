/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:53:47 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/26 16:04:12 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	cutName(std::string name)
{
	if (name.length() > 9)
		return (name.substr(0, 9) + ".");
	return (name);
}

bool	is_valid(std::string buf, int n)
{
	int	hyphen;

	hyphen = 0;
	if (buf.empty())
	{
		std::cout << "You need to enter something" << std::endl;
		return (false);
	}
	if (n == 0 || n == 1)
	{
		for (int j = 0; j < (int)buf.length(); j++)
		{
			if (!(isalpha(buf[j]) || buf[j] == ' ' || (buf[j] == '-' && !hyphen)))
			{
				if (buf[j] == '-')
					hyphen = 1;
				std::cout << "Only alpha expected" << std::endl;
				return (false);
			}
		}
	}
	else if (n == 3)
	{
		if (buf.length() != 10)
		{
			std::cout << "A valid phone number contains ten numbers" << std::endl;
			return (false);
		}
		for (int j = 0; j < (int)buf.length(); j++)
		{
			if (!isdigit(buf[j]))
			{
				std::cout << "Only numbers expected" << std::endl;
				return (false);
			}
		}
	}
	return (true);
}

void	enterEntry(const char *entry, std::string buf[5], int n)
{
	while (1)
	{
		std::cout << entry;
		std::getline(std::cin, buf[n]);
		if (!std::cin)
			break ;
		if (is_valid(buf[n], n))
			break ;
		std::cin.clear();
	}
	std::cin.clear();
}

bool	getInfo(std::string tmp[5], int index)
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

bool	valid_index(std::string index, int count)
{
	if (index.length() != 1)
		return (false);
	if (!std::isdigit(index[0]))
		return (false);
	if (!(index[0] > '0' && index[0] <= count + '0'))
	{
		std::cerr << "Contact doesnt exist ";
		std::cerr << "Valid index between ";
		std::cerr << "1 and " << count << std::endl;
		return (false);
	}
	return (true);
}
