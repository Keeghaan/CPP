# include "MutantStack.hpp"

MutantStack::MutantStack(void)
{
	if (DEBUG)
		std::cout << "MutantStack default constructor" << std::endl;
}

MutantStack::MutantStack(const MutantStack &copy)
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

int	*MutantStack::iterator(int *p)
{
	
}

//OVERLOAD
MutantStack	&MutantStack::operator=(const MutantStack &rhs)
{
	(void)rhs;
	return (*this);
}
