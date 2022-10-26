/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:52:57 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/26 16:20:06 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstdio>

int	main(int ac, char **av)
{
	int	j;
	int	k;
	std::string	buf;

	j = 1;
	if (ac > 1)
	{
		while (av[j])
		{
			k = 0;
			while (av[j][k++])
			{
				buf = toupper(av[j][k++]);
				std::cout << buf;
			}
			j++;
		}
		std::cout << std::endl;
	}
	else if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
