/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:19:45 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/06 16:07:45 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file) : _srcFile(file)
{
	std::cout << "\e[0;33mConstructor called of BitcoinExchange\e[0m" << std::endl;
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _srcFile(copy._srcFile)
{
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of BitcoinExchange\e[0m" << std::endl;
	if (this != &assign)
		_srcFile = assign._srcFile;
	return (*this);
}

int	BitcoinExchange::checkSrcFile(void)
{
	std::ifstream	srcFile;
	
	srcFile.open(_srcFile.c_str());
	if (!srcFile)
	{
		std::cout << "source file doesn't exist\n";
		return (0);
	}
	srcFile.close();
	return (1);
}