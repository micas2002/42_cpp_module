/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:14:37 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:28:37 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "\e[0;33mDefault Constructor called of HumanB\e[0m" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "\e[0;33mDefault Destructor called of HumanB\e[0m" << std::endl;
}

void	HumanB::attack()
{	
	if (this->_weapon != NULL && this->_weapon->getType() != "") 
	{
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    } 
	else 
	{
        std::cout << _name << " attacks with their fists." << std::endl;
    }
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}