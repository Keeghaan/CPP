/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:28:54 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 17:46:55 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		virtual ~Brain(void);

		std::string	getIdeas(unsigned int) const;

		Brain	&operator=(const Brain&);
	private:
		std::string	_ideas[100];
};

#endif
