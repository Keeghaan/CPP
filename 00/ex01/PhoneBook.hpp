#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <string>
# include <iostream>
# include <cstdlib>
# include "Contact.hpp"

class	PhoneBook
{
	public:
		int	count;
		int	full;
		Contact	getContact(int index) const;
		void	setContact(Contact contact, int index);
		void	addContact(void);
		void	searchContact(void);
		PhoneBook(void);
		~PhoneBook(void);
	private :
		Contact _contacts[8]; 
};

#endif
