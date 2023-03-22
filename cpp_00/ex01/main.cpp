/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:52:23 by mibernar          #+#    #+#             */
/*   Updated: 2022/12/22 11:59:36 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	str;

	while (1)
	{
		std::cout << "enter one of the following commands: ADD, SEARCH, EXIT\n";
		std::cin >> str;
		if (str.compare("ADD") == 0)
			phonebook.add();
		else if (str.compare("SEARCH") == 0)
			phonebook.search();
		else if (str.compare("EXIT") == 0)
			break ;
		else
			std::cout << "invalid command\n";
	}
	return (0);
}