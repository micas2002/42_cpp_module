/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:36:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/20 17:44:05 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}

	try
	{
		RPN	rpn(argv[1]);
		
		rpn.parse();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}