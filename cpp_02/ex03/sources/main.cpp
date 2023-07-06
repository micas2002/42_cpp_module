/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:45:09 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/20 17:43:52 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void )
{
    if (bsp(Point(1, 1), Point(6, 1), Point(3, 4), Point(3, 3)) == true) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

    if (bsp(Point(1, 1), Point(6, 1), Point(3, 4), Point(2, 3)) == true) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

    if (bsp(Point(1, 1), Point(6, 1), Point(3, 4), Point(1, 1)) == true) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	
	if (bsp(Point(1, 1), Point(6, 1), Point(3, 4), Point(5, 2)) == true) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
    return (0);
}