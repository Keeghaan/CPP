#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string>
# include <iostream>
# include <cstdlib>
# include "Contact.hpp"

class	PhoneBook
{
	public :
		void	addContact(void);
		void	searchContact(void);
		PhoneBook(void);
		~PhoneBook(void);
	private :
		int	count;
		int	full;
		Contact _contacts[8]; 
};

#endif
