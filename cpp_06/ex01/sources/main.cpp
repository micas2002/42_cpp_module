/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:52 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 19:36:58 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data data = {'f', 42, 42.42f, 42.56};

	std::cout << "original address:       " << &data << std::endl;

	Data* ptr = Serializer::deserialize(Serializer::serialize(&data));

	std::cout << "adress after functions: " << &ptr << std::endl;
	return (0);
}