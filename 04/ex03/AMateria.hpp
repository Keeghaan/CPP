/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:11 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/30 13:34:11 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define DEBUG 0

class ICharacter;

class	AMateria
{
	public:
		AMateria(std::string const&);
		virtual ~AMateria(void);

		const std::string& getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&) = 0;

		AMateria	&operator=(const AMateria&);	
	protected:
		std::string	_type;
};

#endif
