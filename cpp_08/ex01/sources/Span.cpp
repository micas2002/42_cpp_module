/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/03 17:48:19 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy) : _n(copy._n)
{
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
	*this = copy;
}

Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}

Span & Span::operator=(const Span &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Span\e[0m" << std::endl;
	if (this != &assign)
		this->_n = assign._n;
	return (*this);
}

void	Span::addNumber(int	newNumber)
{
	if (_list.size() == _n)
	{
		throw std::exception();
		return ;
	}
	_list.push_back(newNumber);
	return ;
}

int	Span::longestSpan()
{
	if (_n < 2)
		throw Span::insufficientNumbersException();

	return (*std::max_element(_list.begin(), _list.end())
		- *std::min_element(_list.begin(), _list.end()));
}

int	Span::shortestSpan()
{
	if (_n < 2)
		throw Span::insufficientNumbersException();

	std::list<int>::iterator	iter1 = _list.begin();
	std::list<int>::iterator	iter2 = ++_list.begin();
	int							shortestSpan = -1;
	int							difference;

	_list.sort();
	
	while (iter2 != _list.end())
	{
		difference = abs((*iter2 - *iter1));
		if (shortestSpan == -1 || shortestSpan > difference)		
			shortestSpan = difference;	
		iter1++;
		iter2++;
	}
	return (shortestSpan);
}

const char* Span::insufficientNumbersException::what() const throw()
{
	return ("exception: insufficient numbers in list to execute funciton\n");
}
