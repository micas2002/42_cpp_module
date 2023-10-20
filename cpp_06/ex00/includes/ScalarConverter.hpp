/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:08:27 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/10 11:39:15 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctype.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();

		ScalarConverter & operator = (const ScalarConverter &assign);

	public:
		static void		convert(std::string litereal);

		static int		getDataType(std::string literal);
		static int		isChar(std::string litereal);
		static int		isInt(std::string literal);
		static int		isFloat(std::string literal);
		static int		isDouble(std::string literal);
		static int		floatPseudoLiterals(std::string literal);
		static int		doublePseudoLiterals(std::string literal);


		static void		printValues(char c);
		static void		printValues(int i);
		static void		printValues(float f);
		static void		printValues(double d);	
		static void 	printChar(char c);
		static void		printInt(int i);
		static void		printFloat(float f);
		static void		printDouble(double d);
};

#endif