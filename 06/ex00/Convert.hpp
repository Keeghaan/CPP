/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:10:15 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/12/02 16:33:46 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <iomanip>
# include <utility>
# include <cstdlib>

# define DEBUG 0

class	Convert
{
	public:
		Convert(void);
		Convert(std::string&);
		virtual ~Convert(void);

		std::string	getString(void) const;

		void	whichType(void);
		void	converter(void);
		int		isDigit(void);
		int		isValid(void);

		void	convertChar(void);
		void	convertInt(void) const;
		void	convertFloat(void);
		void	convertDouble(void);

//		operator	char { return static_cast<char>(this->_toConvert) };
//		operator	int { return static_cast<int>(this->_toConvert) };
//		operator	float { return static_cast<float>(this->_toConvert) };
//		operator	double { return static_cast<double>(this->_toConvert) };

		class	InvalidTypeException: public std::exception
		{
			public:
				const char	*what(void) const throw();
		};

		Convert &operator=(const Convert&);

	private:
		std::string	_toConvert;	
		int			_which;
		int			_special;
};

std::ostream &operator<<(std::ostream&, Convert&);

#endif
