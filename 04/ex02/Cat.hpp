/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:50:04 by jcourtoi          #+#    #+#             */
/*   Updated: 2022/11/25 19:29:02 by jcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		virtual ~Cat(void);

		Brain	*getBrain(void) const;
		
		virtual void	makeSound(void) const;
		
		Cat	&operator=(const Cat&);
	private:
		Brain	*_brain;
};

#endif
