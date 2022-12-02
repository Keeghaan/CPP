/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:39:47 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:14:43 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
# define FUNC_HPP

# include <iostream>
# include <stdint.h>

struct	Data
{
	int			n;
	std::string	s;
};

uintptr_t	serialize(Data*);
Data		*deserialize(uintptr_t);

#endif
