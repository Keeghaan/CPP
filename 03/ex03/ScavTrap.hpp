/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:46:44 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 21:15:08 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap :virtual public ClapTrap
{
	public:
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);

		unsigned int	getEn(void);

		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
