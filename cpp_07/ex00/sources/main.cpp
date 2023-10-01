/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:11:10 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/01 13:26:01 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	char	a = 'a';
	char	b = 'b';
	
	std::cout << "a before swap: " << a << std::endl;
	std::cout << "b before sawp: " << b << std::endl;

	swap<char>(a, b);

	std::cout << "a after swap: " << a << std::endl;
	std::cout << "b after sawp: " << b << std::endl;
	
	std::cout << std::endl;

	std::cout << max<int>(3, 7) << std::endl;
	std::cout << max<int>(-3, 1) << std::endl;
	std::cout << max<int>(3, 3) << std::endl;
	
	std::cout << std::endl;
	
	std::cout << min<float>(7.0f, 3.3f) << std::endl;
	std::cout << min<float>(-3.0f, 1.0f) << std::endl;
	std::cout << min<float>(3.33f, 3.33f) << std::endl;

	return (0);
}