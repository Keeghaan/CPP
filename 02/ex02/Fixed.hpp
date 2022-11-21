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
/*		static int	min(Fixed&, Fixed&);
		static int	max(Fixed&, Fixed&);
		static int	min(const Fixed&, const Fixed&);
		static int	max(const Fixed&, const Fixed&);
*/		
		Fixed & operator=(const Fixed & rhs);
/*
		Fixed operator>(const Fixed &rhs) const;
		Fixed operator<(const Fixed &rhs) const;
		Fixed operator>=(const Fixed &rhs) const;
		Fixed operator<=(const Fixed &rhs) const;
		Fixed operator==(const Fixed &rhs) const;
		Fixed operator!=(const Fixed &rhs) const;
*/
		Fixed operator+(const Fixed &rhs) const;
/*		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;
*/	
//		Fixed operator++(const Fixed &rhs);
//		Fixed operator--(const Fixed &rhs);
//		Fixed operator++(const Fixed &rhs) const;
//		Fixed operator--(const Fixed &rhs) const;
	private:
		int			_n;
		static const int	_bits = 8;

};

std::ostream	&operator<<(std::ostream&, const Fixed&);

#endif
