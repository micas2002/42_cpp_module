/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:38:51 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/04 16:54:24 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
{
	std::cout << "MutantStack:" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}
	std::cout << std::endl;

{
	std::cout << "Vector:" << std::endl;

	std::vector<int>	vec;
	
	vec.push_back(5);
	vec.push_back(17);
	
	std::cout << vec.back() << std::endl;
	
	vec.pop_back();
	
	std::cout << vec.size() << std::endl;

	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);
	
	std::vector<int>::iterator it2 = vec.begin();
	std::vector<int>::iterator ite2 = vec.end();

	++it2;
	--it2;
	
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::vector<int> s2(vec);
}

	return (0);
}
