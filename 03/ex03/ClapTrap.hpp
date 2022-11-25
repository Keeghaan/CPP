/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:28:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 12:44:45 by jcourtoi         ###   ########.fr       */
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

# define CLAP_EN 10
# define CLAP_HP 10
# define CLAP_AD 0

# define SCAV_EN 50
# define SCAV_HP 100
# define SCAV_AD 20

# define FRAG_EN 100
# define FRAG_HP 100
# define FRAG_AD 30

class	ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap(void);

		std::string			getName(void) const;
		void				setName(const std::string);
		unsigned int		getHit(void) const;
		void				setHit(unsigned int);
		unsigned int		getEn(void) const;
		void				setEn(unsigned int);
		unsigned int		getDam(void) const;
		void				setDam(unsigned int);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	ClapTrap	&operator=(const ClapTrap&);
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

#endif
