/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:00:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/03 17:00:11 by mibernar         ###   ########.fr       */
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

Span::Span(const Span &copy)
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
	return (*std::max_element(_list.begin(), _list.end())
		- *std::min_element(_list.begin(), _list.end()));
}

int	Span::shortestSpan()
{
	_list.sort();
	

}