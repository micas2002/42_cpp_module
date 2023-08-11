/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:25 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 17:14:46 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain));
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete this->brain;
}

Cat & Cat::operator=(const Cat &assign)
{
	if (this->brain)
        delete this->brain;
    this->type = assign.type;
    this->brain = new Brain(*(assign.brain));
    return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
