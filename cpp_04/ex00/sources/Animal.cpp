/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:44:49 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/08 12:46:04 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

Animal & Animal::operator=(const Animal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

std::string	Animal::getType() const
{
	return (this->type);
}
