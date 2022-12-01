/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:15 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/01 15:45:35 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

class	Convert
{
	public:
		Convert(void);
		Convert(std::string&);
		virtual ~Convert(void);

		std::string	getString(void) const;

		char		toChar(void);
		int			toInt(void);
		float		toFloat(void);
		double		toDouble(void);

		Convert &operator=(const Convert&);

	private:
		std::string	_toConvert;	
};

std::ostream &operator<<(std::ostream&, Convert&) const;

#endif
