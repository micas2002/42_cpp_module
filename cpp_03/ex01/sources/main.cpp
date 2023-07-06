/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:15:40 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/25 16:42:08 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	amir = ScavTrap("amir");

	amir.attack("lope");
	amir.takeDamage(50);
	amir.beRepaired(50);
	amir.takeDamage(100);
	amir.beRepaired(5);
	amir.guardGate();
	return (0);
}