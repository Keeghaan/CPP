#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed copy);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);	
	private:
		int			_n;
		static const int	_cn;

}

#endif
