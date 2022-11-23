#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

# define DEBUG 0

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed&);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	min(Fixed&, Fixed&);
		static Fixed	max(Fixed&, Fixed&);
		static Fixed	min(const Fixed&, const Fixed&);
		static Fixed	max(const Fixed&, const Fixed&);
		
		Fixed & operator=(const Fixed & rhs);

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed operator+(const Fixed &rhs) const;
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;
	
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
	private:
		int					_n;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream&, const Fixed&);

#endif
