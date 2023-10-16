	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/04 15:06:18 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(2), _list()
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int n) : _maxSize(n), _list()
{
	std::cout << "\e[0;33mConstructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy) : _maxSize(copy._maxSize)
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
	{
		this->_maxSize = assign._maxSize;
		this->_list = assign._list;
	}
	return (*this);
}

void	Span::addNumber(int	newNumber)
{
	if (_list.size() == _maxSize)
	{
		throw Span::listIsFull();
		return ;
	}
	_list.push_back(newNumber);
	return ;
}

int	Span::longestSpan()
{
	if (_maxSize < 2)
		throw Span::insufficientNumbersException();

	return (*std::max_element(_list.begin(), _list.end())
		- *std::min_element(_list.begin(), _list.end()));
}

int	Span::shortestSpan()
{
	if (_maxSize < 2)
		throw Span::insufficientNumbersException();

	_list.sort();

	std::list<int>::iterator	iter1 = _list.begin();
	std::list<int>::iterator	iter2 = ++_list.begin();
	int							shortestSpan = -1;
	int							difference;
	
	while (iter2 != _list.end())
	{
		difference = (*iter2 - *iter1);
		if (shortestSpan == -1 || shortestSpan > difference)		
			shortestSpan = difference;
		if (shortestSpan == 0)
			break ;
		++iter1;
		++iter2;
	}
	return (shortestSpan);
}

void	Span::fillList(unsigned int range)
{
	srand(time(NULL));
	
	for (unsigned int i = 0; i < _maxSize ; i++)
	{
		// this->addNumber(i); // test with numbers with incrementation of 1 
		// (void)range;
		this->addNumber(std::rand() % range);
	}
}

const char* Span::insufficientNumbersException::what() const throw()
{
	return ("exception: insufficient numbers in list to execute function\n");
}

const char* Span::listIsFull::what() const throw()
{
	return ("exception: list is already full\n");
}