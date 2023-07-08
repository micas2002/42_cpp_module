/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:28 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/03 15:49:49 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	int	i = 0;

	while (i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	int	i = 0;

	while(i < 4)
	{
        if (this->inventory[i])
            delete this->inventory[i];
		i++;
	}
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}

Character & Character::operator=(const Character &assign)
{
	this->name = assign.name;
	*this->inventory = *assign.inventory;
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << this->name << " has equiped " << m->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "inventory is full\n";
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx])
    {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
        std::cout << this->name << " unequipped an item\n";
    }
    else
       std::cout << "no item to unequip from this inventory slot\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
		std::cout << this->name << " used " << this->inventory[idx]->getType()
			<< std::endl;
	}
	else
		std::cout << "no item to use from this inventory slot\n";
}