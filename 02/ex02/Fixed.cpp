#include "Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float nf)
{
	if (DEBUG)
		std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(nf * (1 << this->_bits));
}

Fixed::Fixed(const int n)
{
	if (DEBUG)
		std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_bits;
}

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << "getRawBits func" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	if (DEBUG)
		std::cout << "setRawBits func" << std::endl;
	this->_n = raw;
}

int	Fixed::toInt(void) const
{
	if (DEBUG)
		std::cout << "toInt func" << std::endl;
	return (this->_n >> this->_bits);
}

float	Fixed::toFloat(void) const
{
	if (DEBUG)
		std::cout << "toFloat func" << std::endl;
	return (float(this->_n) / (1 << this->_bits));
}

Fixed	Fixed::min(Fixed &n1, Fixed &n2)
{
	if (DEBUG)
		std::cout << "Min func (non const)" << std::endl;
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (DEBUG)
		std::cout << "Max func (non const)" << std::endl;
	if (n1 > n2)
		return (n1);
	return (n2);
} 

Fixed	Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (DEBUG)
		std::cout << "Min const func" << std::endl;
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (DEBUG)
		std::cout << "Max const func" << std::endl;
	if (n1 > n2)
		return (n1);
	return (n2);
}

		//ASSIGNMENT =

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called." << std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}

		//COMPARAISON <, >, <=, >=, ==, !=

bool	Fixed::operator<(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator < overload" << std::endl;
	return (this->_n < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator > overload" << std::endl;
	return (this->_n > rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator <= overload" << std::endl;
	return (this->_n <= rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator >= overload" << std::endl;
	return (this->_n >= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator == overload" << std::endl;
	return (this->_n == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "Operator != overload" << std::endl;
	return (this->_n != rhs.getRawBits());
}

		//OPERATION +, -, *, /

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator + overload" << std::endl;
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "Operator - overload" << std::endl;
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "Operator * overload" << std::endl;
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	if (DEBUG)
		std::cout << "operator / overload" << std::endl;
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

		//INCREMENT DECREMENT ++ --

Fixed	Fixed::operator++(void) //Pre increment
{
	if (DEBUG)
		std::cout << "pre increment overload" << std::endl;
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator--(void) //Pre decrement
{
	if (DEBUG)
		std::cout << "pre decrement overload" << std::endl;
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator++(int)//Post increment
{
	if (DEBUG)
		std::cout << "post increment overload" << std::endl;
	Fixed	tmp;

	tmp._n = this->_n++;
	return (tmp);
}

Fixed	Fixed::operator--(int)//Post decrement
{
	if (DEBUG)
		std::cout << "post decrement overload" << std::endl;
	Fixed	tmp;

	tmp._n = this->_n--;
	return (tmp);
}

		//Flux redirection <<

std::ostream	&operator<<(std::ostream &out, const Fixed &f)
{
	if (DEBUG)
		std::cout << "Operator << overload" << std::endl;
	out << f.toFloat();
	return (out);
}
