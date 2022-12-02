/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:21 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:29:00 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	if (DEBUG)
		std::cout << "Convert default constructor" << std::endl;
	this->_toConvert = "c";
	this->_which = 0;
	this->_special = 0;
}

Convert::Convert(std::string &s)
{
	if (DEBUG)
		std::cout << "Convert parametric constructor" << std::endl;
	if (s.empty())
		this->_toConvert = "23";
	else
		this->_toConvert = s;
	this->_which = 0;
	this->_special = 0;
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

int	Convert::isDigit(void)
{
	int	result = -1;
	int	dot = 0;
	unsigned long int	j = 0;
	std::string	check[] = { "nan", "+inf", "-inf", "nanf", "+inff", "-inff" };

	for (int i = 0; i < 6; i++)
	{
		if (!check[i].compare(this->_toConvert))
		{
			if (i < 3)
				this->_which = 3;
			else
				this->_which = 2;
			this->_special = 1;
			return (0);
		}
	}
	while (this->_toConvert[j] && (std::isdigit(this->_toConvert[j])
		|| this->_toConvert[j] == '.' || this->_toConvert[0] == '-'
		|| this->_toConvert[this->_toConvert.length() - 1] == 'f'))
	{
		if (this->_toConvert.length() == 1 && std::isdigit(this->_toConvert[0]))
		{
			this->_which = 1;
			break ;
		}	
		if (j != 0 && j != this->_toConvert.length() - 1
			&& this->_toConvert[j] == '.')
		{
			result = 0;
			j++;
			dot++;
		}
		if (this->_toConvert[this->_toConvert.length() - 1] == 'f'
			&& !result && dot == 1)
			this->_which = 2;
		else if (dot == 1 && !result)
			this->_which = 3;
		else if (!dot && result == -1)
			this->_which = 1;
		else
			return (0);
		j++;
	}
	return (1);
}

int	Convert::isValid(void)
{
	int	j = 0;

	if (this->_which > 0)
		return (0);
	while (this->_toConvert[j])
	{
		if (this->_toConvert[j] < 32 || this->_toConvert[j] > 126)
			return (0);
		if (this->_toConvert.length() != 1)
			return (0);
		j++;
	}
	this->_which = 4;
	return (1);
}

void	Convert::whichType(void)
{
	if (isDigit())
		isValid();
	switch (this->_which)
	{
		case (1):
			convertInt();
			break ;
		case (2):
			convertFloat();
			break ;
		case (3):
			convertDouble();
			break ;
		case (4):
			convertChar();
			break ;
		default:
			throw InvalidTypeException();
	}
}

void	Convert::convertChar(void)
{
	char	ctmp = static_cast<char>(this->_toConvert[0]);
	int		tmp = ctmp; 
	float	ftmp = static_cast<float>(ctmp);
	double	dtmp = static_cast<double>(ctmp);

	std::cout << "Int : " << tmp << std::endl;
	std::cout << "Char : " << ctmp << std::endl;
	std::cout << "Float : " << ftmp << ".0f" << std::endl;
	std::cout << "Double : " << dtmp << ".0" <<  std::endl;
}

void	Convert::convertInt(void) const
{
	char	*pos;
	float	tmpTmp = std::strtof(this->_toConvert.c_str(), &pos);
	int		tmp = static_cast<int>(tmpTmp);
	char	ctmp = tmp;
	float	ftmp = tmp;
	double	dtmp = tmp;

	std::cout << "Int : " << tmp << std::endl;
	if (ctmp < 32)
		std::cout << "Char : " << "Non displayable" << std::endl;
	else
		std::cout << "Char : " << ctmp << std::endl;
	std::cout << "Float : " << ftmp << ".0f" << std::endl;
	std::cout << "Double : " << dtmp << ".0" << std::endl;
}

void	Convert::convertFloat(void)
{
	char	*pos;
	float	ftmp = std::strtof(this->_toConvert.c_str(), &pos);
	int		tmp = ftmp;
	char	ctmp = ftmp;
	double	dtmp = ftmp;

	if (this->_special)
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Float : " << ftmp << "f" << std::endl;
		std::cout << "Double : " << dtmp << std::endl;
	}
	else
	{
		std::cout << "Int : " << tmp << std::endl;
		if (ctmp < 32 || ctmp > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << ctmp << std::endl;
		std::cout << "Float : " << ftmp << "f" << std::endl;
		std::cout << "Double : " << dtmp << std::endl;
	}
}

void	Convert::convertDouble(void)
{
	char	*pos;
	double	dtmp = std::strtod(this->_toConvert.c_str(), &pos);
	int		tmp = dtmp;
	char	ctmp = dtmp;
	float	ftmp = dtmp;
	
	if (this->_special)
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Float : " << ftmp << "f" << std::endl;
		std::cout << "Double : " << dtmp << std::endl;
	}
	else
	{
		std::cout << "Int : " << tmp << std::endl;
		if (ctmp < 32 || ctmp > 126)
			std::cout << "Char : " << "Non displayable" << std::endl;
		else
			std::cout << "Char : " << ctmp << std::endl;
		std::cout << "Float : " << ftmp << "f" << std::endl;
		std::cout << "Double : " << dtmp << std::endl;
	}
}

void	Convert::converter(void)
{
	try
	{
		this->whichType();
	}
	catch (Convert::InvalidTypeException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char	*Convert::InvalidTypeException::what(void) const throw()
{
	return ("Invalid type");
}

//OVERLOAD
Convert	&Convert::operator=(const Convert &rhs)
{
	this->_toConvert = rhs.getString();
	return (*this);
}


std::ostream	&operator<<(std::ostream &out, Convert &rhs)
{
	out << rhs.getString() << std::endl;
	return (out);
}
