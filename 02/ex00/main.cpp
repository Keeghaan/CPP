#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a.getRawBits() << std::endl;	
	std::cout << b.getRawBits() << std::endl;	
	std::cout << c.getRawBits() << std::endl;


	b.setRawBits(42);
	Fixed	d(b);
	a.setRawBits(-23);
	c = a;
	std::cout << a.getRawBits() << std::endl;	
	std::cout << b.getRawBits() << std::endl;	
	std::cout << c.getRawBits() << std::endl;	
	return (0);
}
