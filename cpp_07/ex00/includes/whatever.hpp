/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:11:30 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/01 13:22:05 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void swap(T& x, T& y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T x, T y)
{
	if (x == y)
		return (y);
	return (x < y) ? x : y;
}

template <typename T> T max(T x, T y)
{
	if (x == y)
		return (y);
	return (x > y) ? x : y;
}
