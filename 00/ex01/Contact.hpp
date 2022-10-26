/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:07 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/26 16:05:09 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include "utils.hpp"

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
