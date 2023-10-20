/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:38:51 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/16 16:01:51 by mibernar         ###   ########.fr       */
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

	// std::cout << std::endl;

	// {
	// 	std::cout << "MutantStack(std::string):" << std::endl;

	// 	MutantStack<std::string> stringStack;

	// 	stringStack.push("a");
	// 	stringStack.push("b");

	// 	std::cout << stringStack.top() << std::endl;

	// 	stringStack.pop();

	// 	std::cout << stringStack.size() << std::endl;

	// 	stringStack.push("c");
	// 	stringStack.push("d");
	// 	stringStack.push("e");
	// 	stringStack.push("f");

	// 	MutantStack<std::string>::iterator it3 = stringStack.begin();
	// 	MutantStack<std::string>::iterator ite3 = stringStack.end();

	// 	++it3;
	// 	--it3;

	// 	while (it3 != ite3)
	// 	{
	// 		std::cout << *it3 << std::endl;
	// 		++it3;
	// 	}
	// 	std::stack<std::string> s(stringStack);
	// }

	std::cout << std::endl;

	return (0);
}
