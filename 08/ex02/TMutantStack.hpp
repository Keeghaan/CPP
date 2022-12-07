# include "MutantStack.hpp"

template <class T>
MutantStack::MutantStack(void): std::stack<T>()
{
	if (DEBUG)
		std::cout << "MutantStack default constructor" << std::endl;
}

template <typename T>
MutantStack::MutantStack(const MutantStack &copy): std::stack<T>(copy)
{
	if (DEBUG)
		std::cout << "MutantStack copy constructor" << std::endl;
	*this = copy;
}

MutantStack::~MutantStack(void)
{
	if (DEBUG)
		std::cout << "MutantStack destructor" << std::endl;
}

iterator	MutantStack::begin(void)
{
	return (this->c.begin());
}

iterator	MutantStack::end(void)
{
	return (this->c.end());
}

//OVERLOAD
MutantStack	&MutantStack::operator=(const MutantStack &rhs)
{
	this->c = rhs.c;
	return (*this);
}
