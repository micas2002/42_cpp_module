/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:05:42 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/03 12:50:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<int>	intArray(5);

	for (int i = 0; i < 5; i++)
		intArray[i] = i;
		
	try
	{
		for (int i = 0; i < 6; i++)
			std::cout << intArray[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<char>	charArray(11);

	for (int i = 0; i < 11; i++)
		charArray[i] = 65 + i;
		
	try
	{
		for (int i = 0; i < 12; i++)
			std::cout << charArray[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	Array<float>	floatArray(5);

	for (int i = 0; i < 5; i++)
		floatArray[i] = i + .5;
		
	try
	{
		for (int i = 0; i < 5; i++)
			std::cout << floatArray[i] << std::endl;
		std::cout << "size of floatArray: " << floatArray.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	Array<double>	doubleArray;
	
	try
	{
		std::cout << "size of doubleArray: " << doubleArray.size() << std::endl;
		std::cout << doubleArray[1] <<  std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<int>	a(3);
	Array<int>	b(3);
	
	for (int i = 0; i < 3; i++)
		a[i] = i;

	b = a;

	for ( unsigned int i = 0; i < a.size(); i++ ) {
		a[i] = i * 2;
		std::cout << "On a: " << a[i];
		std::cout << " and on testInt2: " << b[i] << std::endl;
	}

	return(0);
}