/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:31:10 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 15:58:27 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal & operator = (const Animal &assign);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
