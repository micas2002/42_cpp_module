/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:08:27 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 17:34:39 by mibernar         ###   ########.fr       */
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
		static int		floatPseudoLiterals(std::string literal);
		static int		doublePseudoLiterals(std::string literal);


		static char		fromChar(std::string litereal);
		static int		fromInt(std::string litereal);
		static float	fromFloat(std::string litereal);
		static double	fromDouble(std::string litereal);

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