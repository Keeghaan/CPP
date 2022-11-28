/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:36:41 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 13:26:51 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"


class	Cure: private AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		virtual ~Cure(void);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter&);
		
		Cure	&operator=(const Cure&);
};

#endif
