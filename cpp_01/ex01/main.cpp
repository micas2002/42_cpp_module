/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:11:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/06/28 16:57:42 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int	main(void)
{
	Zombie *horde = zombieHorde(N, "Tyler");
	int		i = -1;

	while (++i < N)
		horde[i].announce();
	delete[] horde;
	return (0);
}