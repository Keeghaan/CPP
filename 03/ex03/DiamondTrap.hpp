/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:48:12 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 12:39:56 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap(void);

		void	attack(const std::string&);
		void	whoAmI();
		
		DiamondTrap	&operator=(const DiamondTrap&);
	private:
		std::string	_name;
};

#endif
