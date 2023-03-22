/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:43:44 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/12 13:17:55 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "complain-> debug:\n";
	harl.complain("DEBUG");
	std::cout << "\ncomplain-> info:\n";
	harl.complain("INFO");
	std::cout << "\ncomplain-> warning:\n";
	harl.complain("WARNING");
	std::cout << "\ncomplain-> error:\n";
	harl.complain("ERROR");
	std::cout << "\ncomplain-> invalid complain level:\n";
	harl.complain("a");
	return (0);
}