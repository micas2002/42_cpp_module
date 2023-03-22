/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:22:51 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/08 13:30:48 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address:\n" << &string << std::endl << &stringPTR
		<< std::endl << &stringREF << std::endl;
	std::cout << "values:\n" << string << std::endl << stringPTR << std::endl
		<< stringREF << std::endl;
	return (0);
}
