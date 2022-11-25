/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:26:58 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 20:56:32 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <climits>
# include <iostream>
# include "Brain.hpp"

# define RD "\e[0;31m"
# define YL "\e[0;33m"
# define BL "\e[0;34m"
# define GR "\e[0;32m"
# define END "\033[0m"

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal&);
		virtual ~Animal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

		Animal	&operator=(const Animal &);
	protected:
		std::string	_type;
};

#endif
