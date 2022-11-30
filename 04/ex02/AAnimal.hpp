/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:08:18 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 13:08:27 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <climits>
# include <iostream>
# include "Brain.hpp"

# define RD "\e[0;31m"
# define YL "\e[0;33m"
# define BL "\e[0;34m"
# define GR "\e[0;32m"
# define END "\033[0m"

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal&);
		virtual ~AAnimal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

		AAnimal	&operator=(const AAnimal &);
	protected:
		std::string	_type;
};

#endif
