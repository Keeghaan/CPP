#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
	public :
		Contact(void);
		~Contact(void);
		int	index;
		void	printOneContact(void);
		void	addNewContact(std::string tmp[5], int index);
		void	printContact(int index);
	private :
		std::string _name;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif
