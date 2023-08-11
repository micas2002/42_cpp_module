/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:34:57 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 15:57:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat & operator = (const Cat &assign);

		void	makeSound() const;
};

#endif
