/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:42:09 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:21:32 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <algorithm>

PhoneBook::PhoneBook(void)
{
	std::cout << "\e[0;33mDefault Constructor called of PhoneBook\e[0m" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\e[0;33mDefault Destructor called of PhoneBook\e[0m" << std::endl;
}

void	PhoneBook::add(void)
{
	static int	i = 0;

	if (i == 8)
		i = 0;
	contacts[i].add_contact_info();
	i++;
}

void	PhoneBook::search(void)
{
	std::string input;
	int	i;

	i = -1;
	std::cout << "\n------------------CONTACTS-------------------\n";
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	while (++i < 8)
		contacts[i].print_info(i);
	std::cout << "\ninput index of Contact to display;\n";
	std::cin >> input;
	if (std::all_of(input.begin(), input.end(), ::isdigit) == 0)
	{
		std::cout << "input must be a number\n";
			return ;
	}
	i = std::stoi(input);
	if (i < 1 || i > 8)
	{
		std::cout << "invalid index\n";
		return ;
	}
	contacts[i - 1].print_complete_info();
}
