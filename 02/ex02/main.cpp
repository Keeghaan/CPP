#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2.0f ) );
	
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
/*	{
		Fixed const b( Fixed( 5.05f ) * Fixed (2) );
		Fixed		a;
		Fixed const	b(Fixed(2.05f) + Fixed(2));
		Fixed		c(2.2f);
		Fixed		d(5.0f);
		c.setRawBits(2);
		a.setRawBits(5);
		std::cout << "a._n = " << a.getRawBits() << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a + a = " << a + a << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << b << std::endl;
		std::cout << "min b ? a ? " << Fixed::min(b, a) << std::endl;
		std::cout << "c * d = " << c * d << std::endl;
	}*/
	return (0);
}
