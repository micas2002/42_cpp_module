/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:19:45 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/18 17:16:14 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string inputFile) : _srcFile(inputFile)
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
	checkFiles();
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

void	BitcoinExchange::checkFiles()
{
	std::ifstream	databaseFile;
	std::ifstream	inputFile;

	// databaseFile.open("data.csv");
	// if (!databaseFile)
	// 	throw NoDatabaseFileException();
	// databaseFile.close();

	// databaseFile.open(_srcFile.c_str());
	// if (!databaseFile)
	// 	throw NoInputFileException();
	checkInputFileContent();
	// databaseFile.close();
}

void	BitcoinExchange::checkInputFileContent()
{
	std::ifstream	inputFile;
	std::string		line;
	std::string		date;
	struct tm 		tm;

	while (std::getline(inputFile, line))
	{
		date = line.substr(10);
		if (strptime(date.c_str(), "%Y/%m/%d", &tm) == NULL)
			throw InvalidDateException();
	}
}

const char* BitcoinExchange::NoDatabaseFileException::what() const throw()
{
	return ("Exception: no database file found\n");
}

const char* BitcoinExchange::NoInputFileException::what() const throw()
{
	return ("Exception: no input file found\n");
}

const char* BitcoinExchange::InvalidDateException::what() const throw()
{
	return ("Exception: invalid date found\n");
}
