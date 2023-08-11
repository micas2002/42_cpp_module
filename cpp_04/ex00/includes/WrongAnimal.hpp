/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:36:35 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 13:18:53 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CPP
# define WRONG_ANIMAL_CPP

#include "Animal.hpp"

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &assign);

		void			makeSound() const;
		std::string		getType() const;
};

#endif
