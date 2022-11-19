#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called. Hi :)" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	setRawBits(copy._n);
	std::cout << "Copy constructor called. Hi bis :)" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called. Bye :)" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called from "
		<< this->getRawBits() << " to " << rhs.getRawBits() << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}
