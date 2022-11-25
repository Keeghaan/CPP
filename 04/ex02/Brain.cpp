/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:31:49 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 17:46:47 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

std::string	Brain::getIdeas(unsigned int i) const
{
	if (i > 99)
	{
		std::cout << "There is no index " << i << std::endl;
		return (NULL);
	}
	return (this->_ideas[i]);
}

//OVERLOAD

Brain	&Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdeas(i);
	return (*this);
}
