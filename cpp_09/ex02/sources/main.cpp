/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:59:01 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/26 12:16:56 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}

	try
	{
		PmergeMe	a;
		
		a.sort(argv);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return (0);
}