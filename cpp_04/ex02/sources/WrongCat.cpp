/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:07:50 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 19:35:12 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "\e[0;32mAssignation operator called of WrongCat\e[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
