/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:40:04 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/02 18:02:24 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomb;
	
	zomb = zomb->newZombie("Chris");
	zomb->annouce();
	zomb->randomChump("Tyler");
	zomb->randomChump("Henry");
	delete zomb;
	return (0);
}
