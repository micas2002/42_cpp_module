/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:15:40 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/25 17:20:59 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap john = FragTrap("john");

    john.attack("carl");
	john.takeDamage(50);
	john.beRepaired(50);
	john.takeDamage(100);
	john.beRepaired(5);
	john.highFivesGuys();
    return (0);
}