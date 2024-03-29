/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:33:31 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 13:17:28 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
	
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog & operator = (const Dog &assign);

		void	makeSound() const;
};

#endif
