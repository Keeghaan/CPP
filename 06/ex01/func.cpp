/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:38:51 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:15:20 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	*tmp = reinterpret_cast<uintptr_t*>(ptr);

	return (*tmp);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*tmp = reinterpret_cast<Data*>(raw);

	return (tmp);
}
