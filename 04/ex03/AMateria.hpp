/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:11 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 12:47:03 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class	AMateria
{
	public:
		AMateria(std::string const&);
		AMateria(const AMateria&);
		virtual ~AMateria(void);

		const std::string& getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&);
	protected:
		const std::string	_type;
};

#endif
