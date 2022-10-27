/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:53:47 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/27 13:45:31 by jcourtoi         ###   ########.fr       */
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
