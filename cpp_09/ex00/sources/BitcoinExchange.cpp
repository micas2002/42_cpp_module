/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:19:45 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/19 14:36:40 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string inputFile) : _srcFile(inputFile)
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
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

	databaseFile.open("data.csv");
	if (!databaseFile)
		throw NoDatabaseFileException();
	databaseFile.close();

	inputFile.open(_srcFile.c_str());
	if (!inputFile)
		throw NoInputFileException();
	inputFile.close();
}

void	BitcoinExchange::createDatabase()
{
	std::ifstream	databaseFile;
	std::string		info;
	std::string		date;

	databaseFile.open("data.csv");
	if (!databaseFile)
		throw NoDatabaseFileException();
	std::getline(databaseFile, info);
	while (std::getline(databaseFile, info))
	{
		date = info.substr(0, info.find(","));
		info.erase(0, info.find(",") + 1);
		_database[date] = info;
	}
	databaseFile.close();
}

void	BitcoinExchange::convertBitcoin()
{
	std::ifstream	inputFile;
	std::string		line;
	std::string		date;
	std::string		amount;
	struct tm 		tm;

	inputFile.open(_srcFile.c_str());
	if (!inputFile)
		throw NoInputFileException();
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		if (line.size() < 13)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		date = line.substr(0, 10);
		if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		amount = line.substr(date.length() + 1, line.length() - (date.length() + 1));
		std::cout << "amount: " << amount << std::endl;
	}
	inputFile.close();
}

const char* BitcoinExchange::NoDatabaseFileException::what() const throw()
{
	return ("Exception: no database file found\n");
}

const char* BitcoinExchange::NoInputFileException::what() const throw()
{
	return ("Exception: no input file found\n");
}
