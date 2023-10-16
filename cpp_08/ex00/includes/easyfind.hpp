/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:00:10 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/16 15:10:18 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int& easyfind(T container, int i)
{
	typename T::iterator iter;
	
	iter = find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::exception();
	return (*iter);
}

#endif