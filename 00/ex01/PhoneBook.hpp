/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:27 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/27 13:47:11 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
		bool	getInfo(std::string tmp[5], int index);
		PhoneBook(void);
		~PhoneBook(void);
	private :
		Contact _contacts[8]; 
};

#endif
