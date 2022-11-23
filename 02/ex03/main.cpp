/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:42:08 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 16:15:21 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
		Point	a(4.0, 3.0), b(2.26, 1.15), c(6.74, 0.67), point(3.56, 1.59);
		Point	d;
		Point	f(4.58, 0.90);
		Point	e(6.3, 2.61);
		
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
