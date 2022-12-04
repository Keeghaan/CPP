#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array(void): _size(0)
{
	if (DEBUG)
		std::cout << "Array default constructor" << std::endl;
	this->_array = new T[0]; //
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	if (DEBUG)
		std::cout << "Array parametric constructor" << std::endl;
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	if (DEBUG)
		std::cout << "Array copy constructor" << std::endl;
	this->_array = new T[copy.getSize()];
	this->_size = copy.getSize();
}

template <typename T>
Array<T>::~Array(void)
{
	if (DEBUG)
		std::cout << "Array destructor" << std::endl;
	delete [] this->_array;
}

//ACCESSORS
template <typename T>
unsigned int	Array<T>::getSize(void) const
{
	return (this->_size);
}

template <typename T>
T	*Array<T>::getArray(void) const
{
	return (this->_array);
}

template <typename T>
T	Array<T>::getArray(unsigned int n) const
{
	if (n >= this->_size)
		throw NotAccessibleCaseException();
	return (this->_array[n]);
}

//EXCEPTION

template <typename T>
const char	*Array<T>::NotAccessibleCaseException::what(void) const throw()
{
	return ("This case is not accessible");
}


//OVERLOAD
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	if (this != &rhs)
	{
		this->_array = rhs._array;
		this->_size = rhs._size;
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw NotAccessibleCaseException();
	return (this->_array[n]);
}

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &rhs)
{
	for (unsigned int i = 0; i < rhs.getSize(); i++)
		out << rhs.getArray(i) << std::endl;
	return (out);
}

#endif
