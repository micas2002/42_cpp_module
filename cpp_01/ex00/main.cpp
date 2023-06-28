/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:40:04 by mibernar          #+#    #+#             */
/*   Updated: 2023/06/28 16:45:06 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
    Zombie *zombi2 = newZombie("Chris");

    zombi2->announce();
    delete zombi2;

    randomChump("Andi");

    Zombie zombi1("Tyler");

	zombi1.announce();
	return (0);
}
