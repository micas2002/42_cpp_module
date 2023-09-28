/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:46:46 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 18:27:14 by mibernar         ###   ########.fr       */
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
	char	c;
	int		i;
	float	f;
	double	d;

	switch (getDataType(literal))
	{
		case 1:
			i = fromInt(literal);
			printValues(i);
			break ;
		case 2:
			f = fromFloat(literal);
			printValues(f);
			break ;
		case 3:
			d = fromDouble(literal);
			printValues(d);
			break ;
		case 4:
			c = fromChar(literal);
			printValues(c);
			break ;
		case 5:
			std::cout << "Invalid input" << std::endl;
			break ;
	}
}

int ScalarConverter::getDataType(std::string literal)
{
	if ((int)literal.find_first_not_of("-0123456789") == -1)
		return (1);
	else if (floatPseudoLiterals(literal) || doublePseudoLiterals(literal)
		|| ((int)literal.find_first_not_of("-0123456789.f") == -1 
		&& literal.find(".") == literal.find_last_of(".")))
	{
		if (floatPseudoLiterals(literal) || literal.find("f") == literal.find_last_of("f"))
			return (2);
		else if (doublePseudoLiterals(literal) || (int)literal.find("f") == -1)
			return (3);
	}
	else if (literal.size() == 1 && isprint(literal[0]) != 0)
		return (4);
	return (5);
}

int	ScalarConverter::floatPseudoLiterals(std::string literal)
{
	if (literal.compare("nanf") == 0 || literal.compare("-inff") == 0
		|| literal.compare("+inff") == 0)
		return (1);
	return (0);
}

int	ScalarConverter::doublePseudoLiterals(std::string literal)
{
	if (literal.compare("nan") == 0|| literal.compare("-inf") == 0
		|| literal.compare("+inf") == 0)
		return (1);
	return (0);
}

int ScalarConverter::fromInt(std::string literal)
{
	return(atoi(literal.c_str()));
}

float ScalarConverter::fromFloat(std::string literal)
{
	return(strtof(literal.c_str(), NULL));
}

double ScalarConverter::fromDouble(std::string literal)
{
	return((literal.c_str(), NULL));
}

char ScalarConverter::fromChar(std::string literal)
{
	return (literal[0]);
}

void ScalarConverter::printValues(char c)
{
	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void ScalarConverter::printValues(int i)
{
	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(i));
	printInt(i);
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void ScalarConverter::printValues(float f)
{
	if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max()
		|| f != f)
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(f));
	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max()
		|| f != f)
		std::cout << "Int: impossible" << std::endl;
	else
		printInt(static_cast<int>(f));
	printFloat(f);
	printDouble(static_cast<double>(f));
}

void ScalarConverter::printValues(double d)
{
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max()
		|| d != d)
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(d));
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()
		|| d != d)
		std::cout << "Int: impossible" << std::endl;
	else
		printInt(static_cast<int>(d));
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max()
		|| d != d)
		std::cout << "Float: impossible" << std::endl;
	else
		printFloat(static_cast<float>(d));
	printDouble(d);
}

void ScalarConverter::printChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl; 
}

void ScalarConverter::printInt(int i)
{
	std::cout << "Int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f)
{
	std::cout << "Float: " << std::fixed << std::setprecision( 1 ) << f << "f"
		<< std::endl;
}

void ScalarConverter::printDouble(double d)
{
	std::cout << "Double: " << std::fixed << std::setprecision( 1 ) << d
		<< std::endl;
}