/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:21 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/01 15:44:31 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	if (DEBUG)
		std::cout << "Convert default constructor" << std::endl;
	this->_toConvert = "c";
}

Convert::Convert(std::string &s)
{
	if (DEBUG)
		std::cout << "Convert parametric constructor" << std::endl;
	if (s.empty())
		this->_toConvert = "23";
	else
		this->_toConvert = s;
}

Convert::~Convert(void)
{
	if (DEBUG)
		std::cout << "Convert destructor constructor" << std::endl;
}

//ACCESSORS
std::string	Convert::getString(void) const
{
	return (this->_toConvert);
}

//FUNC
char	Convert::toChar(void)
{
	char	tmp = this->_toConvert;
	std::cout << YEL << "Char : " << tmp << NC << std::endl;
}

int	Convert::toInt(void)
{
	int	tmp = this->_toConvert;
	std::cout << BLU << "Int : " << tmp << NC << std::endl;
}

float	Convert::toFloat(void)
{
	float	tmp = this->_toConvert;
	std::cout << GRN << "Float : " << tmp << NC << std::endl;
}

double	Convert::toDouble(void)
{
	double	tmp = this->_toConvert;
	std::cout << RED << "Double : " << tmp << NC << std::endl;
}

void	Convert::converter(void)
{
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

//OVERLOAD
Convert	&Convert::operator=(const Convert &rhs)
{
	this->_toConvert = rhs.getString();
	return (*this);
}


std::ostream	&operator<<(std::ostream out, const Convert &rhs)
{
	out << this->_toConvert << std::endl << this->_converter << std::endl;
}
