/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:52 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 20:02:44 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data data = {'f', 42, 42.42f, 42.56};

	std::cout << "original address:       " << &data << std::endl << std::endl;

	std::cout << "Data: " << std::endl;
	std::cout << "char: " << data.c << std::endl;
	std::cout << "int: " << data.i << std::endl;
	std::cout << "float: " << data.f << std::endl;
	std::cout << "double: " << data.d << std::endl << std::endl;

	Data* ptr = Serializer::deserialize(Serializer::serialize(&data));
	
	std::cout << "adress after functions: " << &ptr << std::endl << std::endl;

	std::cout << "Data: " << std::endl;
	std::cout << "char: " << ptr->c << std::endl;
	std::cout << "int: " << ptr->i << std::endl;
	std::cout << "float: " << ptr->f << std::endl;
	std::cout << "double: " << ptr->d << std::endl;

	return (0);
}