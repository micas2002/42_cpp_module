/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:25 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/08 12:54:33 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
	this->type = assign.type;
	*this->brain = *assign.brain; //deep copy
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}

Brain*	Cat::getBrain()
{
	return (this->brain);
}
