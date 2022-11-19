#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float nf)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(nf * (1 << this->_bits));
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_bits;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
