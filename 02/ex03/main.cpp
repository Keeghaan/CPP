/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:42:08 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 15:05:42 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
		Point	a(4.0, 3.0), b(2.3, 1.1), c(6.8, 0.7), point(3.7, 1.7);
		Point	d;
		Point	f(b);
		Point	e(6.2, 2.7);
		
		d = a;
		std::cout << "Point in the triangle : " << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "The Point is in the Triangle !" << std::endl;
		else
			std::cout << "The Point is not in the Triangle !" << std::endl;
		std::cout << std::endl << "Point not in the triangle : " << std::endl;
		if (bsp(a, b, c, e))
			std::cout << "The Point is in the Triangle !" << std::endl;
		else
			std::cout << "The Point is not in the Triangle !" << std::endl;
		std::cout << std::endl << "Point on the triangle (so not in)" << std::endl;
		if (bsp(a, b, c, f))
			std::cout << "The Point is in the Triangle !" << std::endl;
		else
			std::cout << "The Point is not in the Triangle !" << std::endl;
		std::cout << std::endl << "Point on the triangle (so not in)" << std::endl;
		if (bsp(a, b, c, d))
			std::cout << "The Point is in the Triangle !" << std::endl;
		else
			std::cout << "The Point is not in the Triangle !" << std::endl;
	return (0);
}
