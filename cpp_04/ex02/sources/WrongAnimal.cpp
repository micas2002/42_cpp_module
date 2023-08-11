/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:36:33 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 19:35:01 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "\e[0;32mAssignation operator called of WrongAnimal\e[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
