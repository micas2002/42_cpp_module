/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:04:32 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/16 13:17:20 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void func(T& array)
{
	std::cout << array << std::endl;
}

template <typename T, typename F>
void    iter(T* array, int len, F func)
{
    if (array == NULL)	
		return ;	
	for (int i = 0; i < len; i++)
		func(array[i]);
}

#endif