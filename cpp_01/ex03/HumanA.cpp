/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:45:46 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:28:13 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
	std::cout << "\e[0;33mDefault Constructor called of HumanA\e[0m" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "\e[0;33mDefault Destructor called of HumanA\e[0m" << std::endl;
}

void	HumanA::attack()
{	
	if (this->_weapon.getType() != "") 
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
	else 
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}