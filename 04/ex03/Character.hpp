/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:51:25 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 13:33:34 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

# define INV 4

class	Character: public ICharacter
{
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character&);
		virtual ~Character(void);

	//	AMateria	**getInventory(void) const;
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character	&operator=(const Character&);

	private:
		std::string	_name;
		unsigned int	_idx;
		AMateria	**_inventory;
};

#endif
