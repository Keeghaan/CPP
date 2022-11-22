#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
//	std::cout << "Default constructor called" << std::endl;
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

Fixed	Fixed::min(Fixed &n1, Fixed &n2)
{

	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
} 

Fixed	Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

		//ASSIGNMENT =

Fixed	&Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Copy assignment operator called." << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

		//COMPARAISON <, >, <=, >=, ==, !=

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_n < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_n > rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_n <= rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_n >= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_n == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_n != rhs.getRawBits());
}

		//OPERATION +, -, *, /

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	tmp = *this;

	return (tmp._n + rhs.getRawBits());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	tmp = *this;

	return (tmp._n - rhs.getRawBits());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
//	Fixed	tmp = *this;

//	if (this->isFloat)
		return (Fixed(this->toFloat() * rhs.toFloat()));
//	return (tmp._n * rhs.getRawBits());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	tmp = *this;

	return (tmp._n / rhs.getRawBits());
}

		//INCREMENT DECREMENT ++ --

Fixed	Fixed::operator++(void) //Pre increment
{
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator--(void) //Pre decrement
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator++(int)//Post increment
{
	Fixed	tmp;

	tmp._n = this->_n++;
	return (tmp);
}

Fixed	Fixed::operator--(int)//Post decrement
{
	Fixed	tmp;

	tmp._n = this->_n--;
	return (tmp);
}

		//Flux redirection <<

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
