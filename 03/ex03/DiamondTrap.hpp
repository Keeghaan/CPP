/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:48:12 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 20:51:12 by jcourtoi         ###   ########.fr       */
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
	private:
		std::string	_name;
};

#endif
