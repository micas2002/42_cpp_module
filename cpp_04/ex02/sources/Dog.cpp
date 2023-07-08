/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:32 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/08 13:15:54 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
	this->type = assign.type;
	*this->brain = *assign.brain;//deep copy
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof\n";
}

Brain*	Dog::getBrain()
{
	return (this->brain);
}

std::string	Dog::getType() const
{
	return (this->type);
}
