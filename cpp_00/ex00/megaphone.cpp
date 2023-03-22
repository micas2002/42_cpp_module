/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:17:09 by mibernar          #+#    #+#             */
/*   Updated: 2022/12/19 16:23:58 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	x;

	if (argc == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[++i])
	{
		x = -1;
		while (argv[i][++x])
			std::cout << (char)toupper(argv[i][x]);
	}
	std::cout << "\n";
	return (0);
}
