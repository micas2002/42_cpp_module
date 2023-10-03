/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:49 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/03 15:32:28 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	try
	{
		std::vector<int>	arr;
	
		for (int i = 0; i < 10; i++)
			arr.push_back(i);

		int i = easyfind<std::vector<int> >(arr, 5);
		std::cout << i << std::endl;
	
	}
	catch (std::exception &e)
	{
		std::cout << "exception: could not find occurrence of 5 int arr1" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::vector<int>	arr2;

		arr2.push_back(10);
		arr2.push_back(125);
		arr2.push_back(-42);
		arr2.push_back(333);
		arr2.push_back(0);

		int x = easyfind<std::vector<int> >(arr2, 555);
		std::cout << x << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "exception: could not find occurrence of 555 int arr2" << std::endl;
	}
	return (0);
}