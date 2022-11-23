/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:42:08 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/23 17:52:41 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	{
		Point	a(4.0, 3.0), b(2.26, 1.15), c(6.74, 0.67), point(3.56, 1.59);
		Point	d;
		Point	f(4.58, 0.90);
		Point	e(6.3, 2.61);
		
		d = c;
		std::cout << "---WITH POSITIVE VALUES---" << std::endl << std::endl;
		std::cout << "Point in the triangle : " << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point not in the triangle : " << std::endl;
		if (bsp(a, b, c, e))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point on a side of the triangle" << std::endl;
		if (bsp(a, b, c, f))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point on a side of the triangle" << std::endl;
		if (bsp(a, b, c, d))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
	}
	std::cout << std::endl;
	{
		Point	a(-4.50, -0.81), b(-5.93, -1.78), c(-3.73, -1.48), point(-4.82, -1.36);
		Point	d;
		Point	f(-4.77, -3.53);
		Point	e(6.3, 2.61);
		
		d = c;
		std::cout << "---WITH NEGATIVE VALUES---" << std::endl << std::endl;
		std::cout << "Point in the triangle : " << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point not in the triangle : " << std::endl;
		if (bsp(a, b, c, e))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point on a side of the triangle" << std::endl;
		if (bsp(a, b, c, f))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
		std::cout << std::endl << "Point on a side of the triangle" << std::endl;
		if (bsp(a, b, c, d))
			std::cout << "\e[0;32mThe Point is in the Triangle !\033[0m" << std::endl;
		else
			std::cout << "\e[0;31mThe Point is not in the Triangle !\033[0m" << std::endl;
	}
	return (0);
}
