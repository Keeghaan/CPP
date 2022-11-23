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
	{
		Fixed const b( Fixed( 5.05f ) * Fixed (2) );
		Fixed		a;
		Fixed const	c(Fixed(2.05f) + Fixed(2));
		Fixed		d(2.2f);
		Fixed		f(5.0f);

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << "d = " << d << std::endl;
		std::cout << "f = " << f << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a + a = " << a + a << std::endl;
		std::cout << "--f = " << --f << std::endl;
		std::cout << "f = " << f << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << b << std::endl;
		if (a < d)
			std::cout << "a < d" << std::endl;
		std::cout << "min b ? a ? " << Fixed::min(b, a) << std::endl;
		std::cout << "c * d = " << c * d << std::endl;
	}
	return (0);
}
