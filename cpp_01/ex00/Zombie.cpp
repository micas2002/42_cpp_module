/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:40 by mibernar          #+#    #+#             */
/*   Updated: 2023/06/28 16:40:21 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "\e[0;33mDefault Constructor called of Zombie\e[0m" << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "\e[0;33mDefault Destructor called of Zombie\e[0m " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
