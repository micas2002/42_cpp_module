/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:08:27 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/27 17:24:45 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctype.h>

class ScalarConverter
{
	private:
		static char		_c;
		static int		_i;
		static float 	_f;
		static double	_d;

		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();

		ScalarConverter & operator = (const ScalarConverter &assign);

	public:
		static void	convert(std::string litereal);
		static void	fromChar(std::string litereal);
		static void fromInt(std::string litereal);
		static void fromFloat(std::string litereal);
		static void fromDouble(std::string litereal);
		static void	printValues();

		static int		getDataType(std::string literal);
// 		static char		getChar();
// 		static int		getInt();
// 		static float 	getFloat();
// 		static double 	getDouble();
};

#endif