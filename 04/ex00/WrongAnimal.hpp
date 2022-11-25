/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:56:06 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 16:53:27 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RD "\e[0;31m"
# define YL "\e[0;33m"
# define BL "\e[0;34m"
# define GR "\e[0;32m"
# define END "\033[0m"

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		virtual ~WrongAnimal(void);

		std::string	getType(void) const;
		void	makeSound(void) const;

		WrongAnimal	&operator=(const WrongAnimal&);
	protected:
		std::string	_type;
};

#endif
