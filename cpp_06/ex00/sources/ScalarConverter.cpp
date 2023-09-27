/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:46:46 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/27 17:35:23 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m"
		<< std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m"
		<< std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Bureaucrat\e[0m"
		<< std::endl;
	if (this != &assign)
		(void)assign;
	return (*this);
}

void	ScalarConverter::convert(std::string literal)
{
	switch (getDataType(literal))
	{
		case 1:
			fromInt(literal);
			break ;
		case 2:
			fromFloat(literal);
			break ;
		case 3:
			fromDouble(literal);
			break ;
		case 4:
			fromChar(literal);
			break ;
		// case 5:
		// 	invalidInput();
			break ;
	}
}

int ScalarConverter::getDataType(std::string literal)
{
	if ((int)literal.find_first_not_of("0123456789") == -1)
		return (1);
	else if ((int)literal.find_first_not_of("0123456789.f") == -1 
		&& literal.find(".") == literal.find_last_of("."))
	{
		if (literal.find("f") == literal.find_last_of("f"))
			return (2);
		else if ((int)literal.find("f") == -1)
			return (3);
	}
	else if (literal.size() == 1 && isprint(literal[0]) == 1)
		return (4);
	return (5);
	printValues();
}

void ScalarConverter::fromInt(std::string literal)
{
	_i = atoi(literal.c_str());
}

void ScalarConverter::fromFloat(std::string literal)
{
	_f = strtof(literal.c_str(), NULL);
}

void ScalarConverter::fromDouble(std::string literal)
{
	_d = strtod(literal.c_str(), NULL);
}

void ScalarConverter::fromChar(std::string literal)
{
	_c = literal[0];
}

void ScalarConverter::printValues()
{
	std::cout << "char: " << std::to_string(_c) << std::endl;
	std::cout << "int: " << std::to_string(_i) << std::endl;
	std::cout << "float: " << std::to_string(_f) + "f" << std::endl;
	std::cout << "double: " << std::to_string(_d) << std::endl;
}

// static int ScalarConverter::getInt()
// {
// 	return (this->_i);
// }

// static int ScalarConverter::getFloat()
// {
// 	return (this->_f);
// }

// static int ScalarConverter::getDouble()
// {
// 	return (this->_d);
// }

// static int ScalarConverter::getChar()
// {
// 	return (this->_c);
// }