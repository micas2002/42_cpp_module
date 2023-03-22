/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:17:09 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:27:43 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\e[0;33mDefault Constructor called of Zombie\e[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\e[0;33mDefault Destructor called of Zombie\e[0m" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::give_name(std::string name)
{
	this->name = name;
}