/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:12:21 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/24 17:23:00 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string);
		FragTrap(const FragTrap&);
		~FragTrap(void);

		void	highFivesGuys(void);
};

#endif
