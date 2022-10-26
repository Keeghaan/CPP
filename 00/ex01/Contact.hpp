#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact
{
	public :
		int		index;
		Contact(void);
		~Contact(void);
		std::string getName(void) const;
		void	setName(std::string name);
		std::string getLastName(void) const;
		void	setLastName(std::string lastName);
		std::string getNickname(void) const;
		void	setNickname(std::string nickname);
		std::string getPhoneNumber(void) const;
		void	setPhoneNumber(std::string phoneNumber);
		std::string getDarkestSecret(void) const;
		void	setDarkestSecret(std::string darkestSecret);
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
