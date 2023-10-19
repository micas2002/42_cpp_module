/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:19:39 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/19 14:19:33 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::string								_srcFile;
		std::map<std::string, std::string>		_database;

	public:
		BitcoinExchange(std::string inputFile);
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		
		BitcoinExchange & operator = (const BitcoinExchange &assign);
	
		void	checkFiles();
		void	createDatabase();
		void	convertBitcoin();

		class NoDatabaseFileException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		
		class NoInputFileException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif