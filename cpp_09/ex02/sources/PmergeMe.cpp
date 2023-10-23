/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:53 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/23 16:02:38 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "\e[0;33mDefault Constructor called of PmergeMe\e[0m" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of PmergeMe\e[0m" << std::endl;
	*this = copy;
}

PmergeMe::~PmergeMe()
{
	std::cout << "\e[0;31mDestructor called of PmergeMe\e[0m" << std::endl;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of PmergeMe\e[0m" << std::endl;
	
	return (*this);
}

void	PmergeMe::addToList(char **argv)
{
	int	number;

	for (int i = 1; argv[i]; i++)
	{
		number = std::atoi(argv[i]);
		if (number < 0)
			throw negativeNUmberException();
		_unsortedList.push_front(number);
	}
}

void	PmergeMe::listSort()
{
	std::list<int>::iterator	it;
	int	numb1;

	for (it = _unsortedList.begin(); it != _unsortedList.end(); it++)	
	{
		numb1 = *it;
		++it;
		if (it == _unsortedList.end())
		{
			_sortedList.push_front(numb1);
			break;
		}
		if (numb1 > *it)
			_pairList.push_front(std::make_pair(*it, numb1));
		else
			_pairList.push_front(std::make_pair(numb1, *it));
	}
}

void	PmergeMe::printUnsorted()
{
	std::list<int>::iterator	it;

	std::cout << "Before: ";
	for (it = _unsortedList.begin(); it != _unsortedList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

const char*	PmergeMe::negativeNUmberException::what() const throw()
{
	return ("Exception: negative number found\n");
}