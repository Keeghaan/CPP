#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(const int raw);
		
		Fixed & operator=(const Fixed & rhs);	
	private:
		int			_n;
		static const int	_bits = 8;

};

#endif
