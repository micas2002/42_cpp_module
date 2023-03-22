/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:40:35 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/12 15:23:09 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl =  Harl(argc, argv);

	if (argc != 2)
	{
		std::cout << "invalid number of arguments\n";
		return (0);
	}
	harl.complain();
	return (0);
}