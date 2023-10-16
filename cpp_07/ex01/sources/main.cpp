/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:31:55 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/16 13:23:44 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int	intArray[5] = {1, 2, 3, 4, 5};
	
	iter<int>(intArray, 5, func<int>);

	std::cout << std::endl;
	
	char	charArray[5] = {'a', 'b', 'c', 'd', 'e'};

	iter<char>(charArray, 5, func<char>);

	std::cout << std::endl;

	float	floatArray[7] = {25.0f, 7.3f, 15.99f, 0.0f, -48.0f, 42.42f, 99.99f};
	
	iter<float>(floatArray, 7, func<float>);
	return (0);
}
