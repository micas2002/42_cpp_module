/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:11:10 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/12 16:43:56 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	{
		char	a = 'a';
		char	b = 'b';
		
		std::cout << "a before swap: " << a << std::endl;
		std::cout << "b before sawp: " << b << std::endl;

		swap<char>(a, b);

		std::cout << "a after swap: " << a << std::endl;
		std::cout << "b after sawp: " << b << std::endl;
		
		std::cout << std::endl;
		
		int	c = 10;
		int d = 20;
		
		std::cout << "c before swap: " << c << std::endl;
		std::cout << "d before sawp: " << d << std::endl;

		swap<int>(c, d);

		std::cout << "c after swap: " << c << std::endl;
		std::cout << "d after sawp: " << d << std::endl;
	}
	
	std::cout << std::endl;

	{
		std::cout << max<int>(3, 7) << std::endl;
		std::cout << max<int>(-3, 1) << std::endl;
		std::cout << max<int>(3, 3) << std::endl;
		
		std::cout << std::endl;
		
		std::cout << min<float>(7.0f, 3.3f) << std::endl;
		std::cout << min<float>(-3.0f, 1.0f) << std::endl;
		std::cout << min<float>(3.33f, 3.33f) << std::endl;
		
		std::cout << std::endl;
		
		std::string s1 = "hello1";
		std::string s2 = "hello2";
		
		std::cout << ::max<std::string>(s1, s2) << std::endl;
		std::cout << ::min<std::string>(s1, s2) << std::endl;
	}

	return (0);
}