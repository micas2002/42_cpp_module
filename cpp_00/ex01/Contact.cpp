/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:20:29 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/13 10:20:18 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	std::cout << "\e[0;33mDefault Constructor called of Contact\e[0m" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "\e[0;33mDefault Destructor called of Contact\e[0m" << std::endl;
}

std::string	Contact::get_info(std::string message)
{
	std::string	str;

	while (1)
	{
		std::cout << message;
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Contact can't have empty fields\n";
		else
			break ;
	}
	return (str);
}

void	Contact::add_contact_info(void)
{
	Contact		contact;
	
	std::cin.ignore();
	this->first_name = get_info("First Name: ");
	this->last_name = get_info("Last Name: ");
	this->nickname = get_info("Nickname: ");
	this->phone_number = get_info("Phone Number: ");
	this->dark_secret = get_info("Darkest Secret: ");
}

std::string	Contact::trim_info(std::string str)
{
	if (str.size() > 10)
		str = str.substr(0, 9) + ".";
	return (str);
		
}

void	Contact::print_complete_info(void)
{
	int		len;
	int		x;

	if (this->first_name.empty())
	{
		std::cout << "no entry yet\n";
		return ;
	}
	std::cout << "First Name: " << this->first_name << "\n";	
	std::cout << "Last Name: " << this->last_name << "\n";
	std::cout << "Nickname: " << this->nickname << "\n";
	std::cout << "Phone Number: " << this->phone_number << "\n";
	std::cout << "Darkest Secret: " << this->dark_secret << "\n\n";
}

void	Contact::print_info(int index)
{
	int		len;
	int		x;

	if (this->first_name.empty())
		return ;
	std::cout << "|         " << index + 1 << "|";
	len = this->first_name.size();
	std::cout << std::setw(10) << trim_info(this->first_name) << "|";	
	len = this->last_name.size();
	std::cout << std::setw(10) << trim_info(this->last_name) << "|";
	len = this->nickname.size();
	std::cout << std::setw(10) << trim_info(this->nickname) << "|\n";
}