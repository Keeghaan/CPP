#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

# define DEBUG 1

template <typename T>
class	Array
{
	public:
		Array(void);
		Array(unsigned int);
		Array(const Array&);
		virtual ~Array(void);

		T		*getArray(void) const;
		T		getArray(unsigned int) const;		
		unsigned int	getSize(void) const;
		class	NotAccessibleCaseException: public std::exception
		{
			public:
				const char	*what(void) const throw();	
		};

		Array<T>	&operator=(const Array<T>&);
		T		&operator[](unsigned int);
	private:
		T		*_array;
		unsigned int	_size;
		
};

template <typename T>
std::ostream	&operator<<(std::ostream &out, const Array<T>&);

#endif
