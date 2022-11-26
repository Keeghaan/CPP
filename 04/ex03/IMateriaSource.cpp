/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:24:56 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 12:27:06 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "IMateriaSource default constructor" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	std::cout << "IMateriaSource copy constructor" << std::endl;
	*this = copy;
}
IMateriaSource::~IMateriaSource(void)
{
	std::cout << "IMateriaSource destructor" << std::endl;
}

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &rhs)
{
	(void)rhs;
	return (*this);
}
