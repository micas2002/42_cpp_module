/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:08:25 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:29:08 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "\e[0;33mDefault Constructor called of Weapon\e[0m" << std::endl;
	this->setType(type);
}

Weapon::~Weapon()
{
	std::cout << "\e[0;33mDefault Destructor called of Weapon\e[0m" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}