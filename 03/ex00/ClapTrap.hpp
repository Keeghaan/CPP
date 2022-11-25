/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:28:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 10:55:18 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <climits>

# define DEBUG 0
# define RD "\e[0;31m"
# define GR "\e[0;32m"
# define YL "\e[0;33m"
# define BL "\e[0;34m"
# define END "\033[0m"

class	ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap(void);

		std::string			getName(void) const;
		void				setName(const std::string);
		unsigned int		getHit(void) const;
		void				setHit(const unsigned int);
		unsigned int		getEn(void) const;
		void				setEn(const unsigned int);
		unsigned int		getDam(void) const;
		void				setDam(const unsigned int);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	ClapTrap	&operator=(const ClapTrap&);
	private:
		std::string	_name;
		unsigned int			_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;

};

#endif
