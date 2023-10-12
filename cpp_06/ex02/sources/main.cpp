/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:13:43 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/10 15:18:19 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base& p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Type: A" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{
		
	}
	
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "Type: B" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{
		
	}
	
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Type: C" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{
		
	}
	std::cout << "error: no type found" << std::endl;
	return ;
}

void	identify(Base* p)
{
	if (p == NULL)
		std::cout << "NULL pointer given" << std::endl;
	else if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Unknown type received" << std::endl;
}

Base * generate(void)
{
	Base*	base = NULL;

	switch (std::rand() % 3)
	{
		case 0:
			base = new A();
			break ;
		case 1:
			base = new B();
			break ;
		case 2:
			base = new C();
			break ;
	}
	return (base);
}

int	main()
{
	srand(time(NULL));
	Base*	ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	identify(NULL);

	A	a;
	B	b;
	C	c;

	identify(a);
	identify(b);
	identify(c);

	return (0);	
}