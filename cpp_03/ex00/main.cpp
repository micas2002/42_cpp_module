/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:15:40 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/24 18:27:01 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap gil = ClapTrap("gil");

	gil.attack("lope");
	gil.takeDamage(4);
	gil.beRepaired(3);
	gil.takeDamage(11);
	gil.beRepaired(5);

	return (0);
}