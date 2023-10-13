/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:32 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/13 15:59:34 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void func(const T& array)
{
	std::cout << array << std::endl;
}

template <typename T>
void iter(T* array, int len, void (*func)(const T& x))
{
	if (array == NULL)	
		return ;
	for (int i = 0; i < len; i++)
		func(array[i]);
}