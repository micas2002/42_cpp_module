/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:53 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/25 15:31:42 by mibernar         ###   ########.fr       */
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
	(void)assign;
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
		_unsortedList.push_back(number);
	}	
	listSort();
}

void	PmergeMe::listSort()
{
	makePairsList();
	insertSortPairs();
	
	std::list<std::pair<int, int> >::iterator it = _pairList.begin();

    for (; it != _pairList.end(); ++it)
		_sortedList.push_back(it->second);

	// std::cout << "begin sort:" << std::endl;
	
	// std::list<int>::iterator a= _sortedList.begin();
	// for (; a != _sortedList.end(); ++a)
	// 	std::cout << *a << std::endl;

	// std::cout << std::endl;

	std::list<int>::iterator currentB = _sortedList.begin();
	std::list<int>::iterator currentA;
	std::list<int>::iterator temp;

	it = _pairList.begin();
	
	// _sortedList.insert(currentA, it->first);
	for (; currentB != _sortedList.end(); ++currentB)
	{
		currentA = currentB;
		--currentA;
		for (; ; --currentA)
		{
			if (currentA == _sortedList.begin())
			{
				if (it->first > *currentA)
					_sortedList.insert(++currentA, it->first);
				else
					_sortedList.push_front(it->first);
				break;
			}
			if (it->first > *currentA)
			{
				++currentA;
				_sortedList.insert(currentA, it->first);
				break;
			}
		}
		++it;
		// temp = _sortedList.begin();
	
		// for (; temp != _sortedList.end(); ++temp)
		// std::cout << *temp << std::endl;
		// std::cout << std::endl;
	}
	
	// temp = _sortedList.begin();
	
	// for (; temp != _sortedList.end(); ++temp)
	// 	std::cout << *temp << std::endl;
	
}

void	PmergeMe::makePairsList()
{
	std::list<int>::iterator	it;
	int	numb1;

	for (it = _unsortedList.begin(); it != _unsortedList.end(); it++)	
	{
		numb1 = *it;
		++it;
		if (it == _unsortedList.end())
		{
			_sortedList.push_back(numb1);
			break;
		}
		if (numb1 > *it)
			_pairList.push_back(std::make_pair(*it, numb1));
		else
			_pairList.push_back(std::make_pair(numb1, *it));
	}
}

void	PmergeMe::insertSortPairs()
{
	std::list<std::pair<int, int> >::iterator current = _pairList.begin();
	++current;

    for (; current != _pairList.end(); ++current)
	{
        std::list<std::pair<int, int> >::iterator temp = current;
        std::list<std::pair<int, int> >::iterator temp2 = temp;
		--temp2;

        while (temp != _pairList.begin() && temp->second < temp2->second)
		{
            std::swap(*temp, *temp2);
            --temp;
            --temp2;
        }
    }
	
	current = _pairList.begin();

	// std::cout << "sorted pairs: " << std::endl;

	// for (; current != _pairList.end(); ++current)
	// 	std::cout << current->first << " " << current->second << std::endl;

	// std::cout << std::endl;
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