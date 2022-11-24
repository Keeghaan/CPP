/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:26:58 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 22:00:55 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define YL "\e[0;33m"
# define BL "\e[0;34m"
# define GR "\e[0;32m"
# define END "\033[0m"

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal&);
		~Animal(void);

		std::string	getType(void) const;

		Animal	&operator=(const Animal &);
	protected:
		std::string	_type;
};

#endif
