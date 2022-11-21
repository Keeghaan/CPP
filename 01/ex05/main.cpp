/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:16 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/21 13:25:52 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	int	j;

	j = 0;
	if (ac == 1)
	{
		harl.complain("DEBUG");
		std::cout << std::endl;
		harl.complain("INFO");
		std::cout << std::endl;
		harl.complain("WARNING");
		std::cout << std::endl;
		harl.complain("ERROR");
		std::cout << std::endl;
		harl.complain("Hello");
		std::cout << std::endl;
	}
	else
	{
		while (av[++j])
		{
			harl.complain(av[j]);
			std::cout << std::endl;
		}
	}
return (0);
}
