#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed&);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(const int);
		float	toFloat(void) const;
		int	toInt(void) const;
		
		Fixed & operator=(const Fixed & rhs);	
	private:
		int			_n;
		static const int	_bits = 8;

};

std::ostream	&operator<<(std::ostream&, const Fixed&);

#endif
