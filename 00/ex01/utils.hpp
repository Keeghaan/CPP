/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:56:22 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/10/27 13:46:55 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iomanip>
# include <string>
# include <iostream>
# include <cstdlib>

bool	valid_index(std::string index, int count);
bool	is_valid(std::string buf, int n);
void	enterEntry(const char *entry, std::string buf[5], int n);
std::string	cutName(std::string name);

#endif
