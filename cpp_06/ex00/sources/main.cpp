/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:40:49 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 16:20:11 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}

	std::string	s = argv[1];	

    ScalarConverter::convert(s);
    return (0);
}