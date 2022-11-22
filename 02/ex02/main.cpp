#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
	Fixed		a;
	Fixed const	b(Fixed(2.05f) + Fixed(2));
	Fixed		c;

	c.setRawBits(2);
	a.setRawBits(5);
	std::cout << "a._n = " << a.getRawBits() << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a + a = " << a + a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min b ? a ? " << Fixed::min(b, a) << std::endl;
	std::cout << "c * c = " << c * c << std::endl;
	}
	return (0);
}
