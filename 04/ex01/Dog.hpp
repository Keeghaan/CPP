/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:36:15 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 19:28:52 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		virtual ~Dog(void);

		Brain	*getBrain(void) const;

		virtual void	makeSound(void) const;
		
		Dog	&operator=(const Dog&);
	private:
		Brain	*_brain;
};

#endif
