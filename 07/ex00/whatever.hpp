/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:34:10 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 18:51:56 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
const	T	&max(const T &x, const T &y)
{
	return (x >= y ? x : y);
}

template <typename T>
const T	&min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template <typename T>
void	swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif
