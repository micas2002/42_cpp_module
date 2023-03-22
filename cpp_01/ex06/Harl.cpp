/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:40:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:30:23 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"

Harl::Harl(int argc, char **argv)
{
	std::cout << "\e[0;33mDefault Constructor called of Harl\e[0m" << std::endl;
	if (argc != 2)
		return ;
	complainings = argv[1];
}

Harl::~Harl(void)
{
	std::cout << "\e[0;31mDefaut Destructor called of Harl\e[0m" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!\n\n";
	info();
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You ";
	std::cout << "didn’t put enough bacon in my burger! If you did, I wouldn’t ";
	std::cout << "be asking for more!\n\n";
	warning();
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve ";
	std::cout << "been coming for years whereas you started working here ";
	std::cout << "since last month.\n\n";
	error();
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::invalidComplain(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void	Harl::complain(void)
{
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && levels[i].compare(complainings))
		i++;
	switch(i)
	{
		case 0:
			debug();
			break ;
		case 1:
			info();
			break ;
		case 2:
			warning();
			break ;
		case 3:
			error();
			break ;
		case 4:
			invalidComplain();
			break ;
	}
}