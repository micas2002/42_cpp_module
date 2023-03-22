/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:45:35 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/02 17:53:55 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "\e[0;33mConstructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &assign)
{
	this->type = assign.type;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->type);
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}