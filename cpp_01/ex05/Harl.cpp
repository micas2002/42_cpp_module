/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:49:23 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:29:56 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "\e[0;33mDefault Constructor called of Harl\e[0m" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "\e[0;33mDefault Destructor called of Harl\e[0m" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You ";
	std::cout << "didn’t put enough bacon in my burger! If you did, I wouldn’t ";
	std::cout << "be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve ";
	std::cout << "been coming for years whereas you started working here ";
	std::cout << "since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::invalidComplain(void)
{
	std::cout << "invalid complain level\n";
}

void	Harl::complain(std::string level)
{
	t_func		functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalidComplain};
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && levels[i].compare(level))
		i++;
	(this->*functions[i])();
}