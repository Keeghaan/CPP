/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:24 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/21 13:36:40 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>

class	Harl;

typedef struct s_harl
{
	void (Harl::*f)(void);
}	t_harl;

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
	
		void	complain(std::string level);

	private:
		t_harl	_complaint[4];
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
