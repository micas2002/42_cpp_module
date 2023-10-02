/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:32 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/02 16:43:47 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void func(T array, int i)
{
	std::cout << "index " << i << ": " << array << std::endl;
}

template <typename T> void iter(T* array, T len, void (*func)(T array, int i))
{
	for (int i = 0; i < len; i++)
		func(array[i], i);
}