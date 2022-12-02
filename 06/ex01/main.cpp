/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:40:48 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:18:52 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

int	main(void)
{
	Data	test;
	Data	*testTmp;

	test.n = 23;
	test.s = "Hello Sunshine";

	std::cout << test.n << " " << test.s << std::endl;
	uintptr_t	tmp = serialize(&test);
	std::cout << test.n << " " << test.s << std::endl;
	testTmp = deserialize(tmp);
	std::cout << test.n << " " << test.s << std::endl;

	return (0);
}
