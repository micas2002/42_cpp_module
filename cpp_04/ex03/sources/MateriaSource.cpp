/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:16:23 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/08 13:50:21 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		materias[i] = NULL;
		i++;
	}
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		if (materias[i])
			delete materias[i];
		i++;
	}
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	if (this != &assign)
	{
		int	i = 0;

		while (i < 4)
            materias[i] = assign.materias[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			std::cout << "MateriaSource learned " << materias[i]->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "MateriaSource has no materia slots available\\n" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	
	while (i < 4)
	{
		if (materias[i] && materias[i]->getType() == type )
            return materias[i]->clone();
		i++;
	}
	return (NULL);
}