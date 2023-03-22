/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:46:04 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/25 17:13:46 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
	std::cout << "\e[0;33mConstructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints= assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " requests a high five!\n";
}