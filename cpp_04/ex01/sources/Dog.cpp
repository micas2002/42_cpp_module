/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:32 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 19:34:09 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain));
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete this->brain;
}

Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;32mAssignation operator called of Dog\e[0m" << std::endl;
	if (this->brain)
        delete this->brain;
    this->type = assign.type;
    this->brain = new Brain(*(assign.brain));
    return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
