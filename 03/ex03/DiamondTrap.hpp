/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:48:12 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 18:26:42 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap
{
	public:
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap(void);

		void	whoAmI();
	private:
		std::string	_name;
}

#endif
