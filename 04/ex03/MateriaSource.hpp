/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:27:28 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 12:51:01 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		virtual ~MateriaSource(void);

		unsigned int	getN(void) const;

		virtual void learnMateria(AMateria*);
		virtual AMateria	*createMateria(const std::string&);
	
		MateriaSource	&operator=(const MateriaSource&);
		private:
			unsigned int	_nMateria;
			AMateria		*_materias[INV];
};

#endif
