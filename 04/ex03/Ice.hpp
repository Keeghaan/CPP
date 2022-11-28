/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:25:01 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 13:34:39 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		virtual ~Ice(void);

		virtual Ice	*clone(void) const;
		virtual void		use(ICharacter&);
};

#endif
