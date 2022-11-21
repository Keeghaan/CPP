/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:16 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/21 13:41:50 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Try two arguments, it'll filter itself <./harlFilter <arg>>"
		<< std::endl;
	return (0);
}
