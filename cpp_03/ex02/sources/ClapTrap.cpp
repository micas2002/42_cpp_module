/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:23:03 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 16:24:36 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "\e[0;33mConstructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints= assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't do anything. Hit poins or energy points depleted\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << name << " lost " << amount << " hit points\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't do anything. Hit poins or energy points depleted\n";
		return ;
	}
	this->hitPoints += amount; 
	this->energyPoints--;
	std::cout << "ClapTrap " << name << " regained " << amount << " hit points back\n";
}