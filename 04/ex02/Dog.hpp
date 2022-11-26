/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:36:15 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/26 09:58:40 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public AAnimal
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
