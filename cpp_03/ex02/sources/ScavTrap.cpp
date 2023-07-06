/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:33:48 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 16:24:48 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout << "\e[0;33mConstructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints= assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't do anything. Hit poins or energy points depleted\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}