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

#include "Data.hpp"

int	main(void)
{
	Data	test;
	Data	*tmp = &test;

	test.n = 23;
	test.s = "Hello Sunshine";

	std::cout << "tmp : " << tmp->n << " " << tmp->s << std::endl;
	uintptr_t	uiTmp = serialize(&test);
	std::cout << "uiTmp : "  << uiTmp << std::endl;
	Data *dTmp = deserialize(uiTmp);
	std::cout << "dTmp : " << dTmp->n << " " << dTmp->s << std::endl;
	
	return (0);
}
