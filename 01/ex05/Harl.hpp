/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/09 18:32:16 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>
# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class	Harl;

typedef struct s_harl
{
	std::string	level;
	void (Harl::*f)(void);
}	t_harl;

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
	private:
		t_harl	_complain[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
