/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:48:10 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 17:02:43 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int	x = -1;

	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
	while (++x < 100)
		this->ideas[x] = "ideas";
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

Brain & Brain::operator=(const Brain &assign)
{
	int	i = 0;

	while (i < 100)
	{
		this->ideas[i] = assign.ideas[i];
		i++;
	}
	return (*this);
}
	