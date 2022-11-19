#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float nf)
{
//	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(nf * (1 << this->_bits));
}

Fixed::Fixed(const int n)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_bits;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_n >> this->_bits);
}

float	Fixed::toFloat(void) const
{
	return (float(this->_n) / (1 << this->_bits));
}

int	Fixed::min(Fixed n1, Fixed n2)
{

}

int	Fixed::max(Fixed n1, Fixed n2)
{

} 

int	Fixed::min(const Fixed n1, const Fixed n2)
{

}

int	Fixed::max(const Fixed n1, const Fixed n2)
{

} 
		//ASSIGNMENT =

Fixed	&Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Copy assignment operator called." << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

		//COMPARAISON <, >, <=, >=, ==, !=

Fixed	Fixed::operator<(const Fixed &rhs)
{

}

Fixed	Fixed::operator>(const Fixed &rhs)
{

}

Fixed	Fixed::operator<=(const Fixed &rhs)
{

}

Fixed	Fixed::operator>=(const Fixed &rhs)
{

}

Fixed	Fixed::operator==(const Fixed &rhs)
{

}

Fixed	Fixed::operator!=(const Fixed &rhs)
{

}

		//OPERATION +, -, *, /

Fixed	Fixed::operator+(const Fixed &rhs)
{

}

Fixed	Fixed::operator-(const Fixed &rhs)
{

}

Fixed	Fixed::operator*(const Fixed &rhs)
{

}

Fixed	Fixed::operator/(const Fixed &rhs)
{

}

		//INCREMENT DECREMENT ++ --

Fixed	Fixed::operator++(const Fixed &rhs) //Pre increment
{

}

Fixed	Fixed::operator--(const Fixed &rhs) //Pre decrement
{

}

Fixed	Fixed::operator++const Fixed &rhs) //Post increment
{

}

Fixed	Fixed::operator--(const Fixed &rhs) //Post decrement
{

}

		//Flux redirection <<

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
