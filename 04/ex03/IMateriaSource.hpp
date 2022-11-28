/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:22:06 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 12:51:12 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# define INV 4

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria	*createMateria(const std::string&) = 0;
};

#endif
