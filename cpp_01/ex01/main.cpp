/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:11:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/02 19:18:41 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int	main(void)
{
	Zombie *horde;
	int		i = -1;

	horde = zombieHorde(N, "Tyler");
	while (++i < N)
		horde[i].annouce();
	delete [] horde;
	return (0);
}