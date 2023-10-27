/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:53 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/27 17:44:02 by mibernar         ###   ########.fr       */
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

void	PmergeMe::sort(char **argv)
{
	_listTime = clock();
	
	listSort(argv);
	
	_listTime = clock() - _listTime;
	
	_dequeTime = clock();
	
	dequeSort(argv);
	
	_dequeTime = clock() - _dequeTime;
	
	printList();
	printTime();
}

void	PmergeMe::listSort(char **argv)
{
	addToList(argv);
	makePairsList();
	insertSortPairsList();
	
	std::list<std::pair<int, int> >::iterator it = _pairList.begin();

    for (; it != _pairList.end(); ++it)
		_sortedList.push_back(it->second);

	std::list<int>::iterator currentB = _sortedList.begin();
	std::list<int>::iterator currentA;
	std::list<int>::iterator temp;

	it = _pairList.begin();
	
	for (; currentB != _sortedList.end(); ++currentB)
	{
		currentA = currentB;
		--currentA;
		for (; ; --currentA)
		{
			if (it->first == -1)
				break;
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
	}
}

void	PmergeMe::addToList(char **argv)
{
	int	number;

	for (int i = 1; argv[i]; i++)
	{
		number = std::atoi(argv[i]);
		if (number < 0 || std::find(_unsortedList.begin()
			, _unsortedList.end(), number) != _unsortedList.end())
			throw invalidArgumentFoundException();
		_unsortedList.push_back(number);
	}	
}

void	PmergeMe::makePairsList()
{
	std::list<int>::iterator	it = _unsortedList.begin();
	int	numb1;

	for (; it != _unsortedList.end(); ++it)	
	{
		numb1 = *it;
		++it;
		if (it == _unsortedList.end())
		{
			_pairList.push_back(std::make_pair(-1, numb1));
			break;
		}
		if (numb1 > *it)
			_pairList.push_back(std::make_pair(*it, numb1));
		else
			_pairList.push_back(std::make_pair(numb1, *it));
	}
}

void	PmergeMe::insertSortPairsList()
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
}

void	PmergeMe::dequeSort(char **argv)
{
	addToDeque(argv);
	makePairsDeque();
	insertSortPairsDeque();
	
	std::deque<std::pair<int, int> >::iterator it = _pairDeque.begin();

    for (; it != _pairDeque.end(); ++it)
		_sortedDeque.push_back(it->second);

	std::deque<int>::iterator currentB = _sortedDeque.begin();
	std::deque<int>::iterator currentA = currentB;
	std::deque<int>::iterator temp;

	it = _pairDeque.begin();
	if (it->first != -1)
	{
		_sortedDeque.push_front(it->first);
		++it;
		++currentB;
	}
	for (; currentB != _sortedDeque.end(); ++currentB)
	{
		currentA = currentB;
		--currentA;
		for (; ; --currentA)
		{
			if (it->first == -1)
				break;
			if (currentA == _sortedDeque.begin())
			{
				if (it->first > *currentA)
					_sortedDeque.insert(++currentA, it->first);
				else
					_sortedDeque.push_front(it->first);
				break;
			}
			if (it->first > *currentA)
			{
				++currentA;
				_sortedDeque.insert(currentA, it->first);
				break;
			}
		}
		currentB = std::find(_sortedDeque.begin(), _sortedDeque.end(), it->second);
		++it;
	}
}

void	PmergeMe::addToDeque(char **argv)
{
	int	number;

	for (int i = 1; argv[i]; i++)
	{
		number = std::atoi(argv[i]);
		if (number < 0 || std::find(_unsortedDeque.begin()
			, _unsortedDeque.end(), number) != _unsortedDeque.end())
			throw invalidArgumentFoundException();
		_unsortedDeque.push_back(number);
	}
}

void	PmergeMe::makePairsDeque()
{
	std::deque<int>::iterator	it = _unsortedDeque.begin();
	int numb1;
	
	for (; it != _unsortedDeque.end(); ++it)
	{
		numb1 = *it;
		++it;
		if (it == _unsortedDeque.end())
		{
			_pairDeque.push_back(std::make_pair(-1, numb1));
			break;
		}
		if (numb1 > *it)
			_pairDeque.push_back((std::make_pair(*it, numb1)));
		else
			_pairDeque.push_back(std::make_pair(numb1, *it));
	}
}

void	PmergeMe::insertSortPairsDeque()
{
	std::deque<std::pair<int, int> >::iterator	current = _pairDeque.begin();
	++current;
	
	for (; current != _pairDeque.end(); ++current)
	{
		std::deque<std::pair<int, int> >::iterator	temp = current;
		std::deque<std::pair<int, int> >::iterator	temp2 = temp;
		--temp2;
		
		while (temp != _pairDeque.begin() && temp->second < temp2->second)
		{
			std::swap(*temp, *temp2);
			--temp;
			--temp2;
		}
	}
}

void	PmergeMe::printList()
{
	std::list<int>::iterator	it = _unsortedList.begin();

	std::cout << "Before: ";
	for (it = _unsortedList.begin(); it != _unsortedList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	it = _sortedList.begin();

	std::cout << "After:  ";
	for (it = _sortedList.begin(); it != _sortedList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	
	std::cout << "\ndeque\n";
	std::deque<int>::iterator	it2 = _unsortedDeque.begin();

	std::cout << "Before: ";
	for (it2 = _unsortedDeque.begin(); it2 != _unsortedDeque.end(); it2++)
		std::cout << *it2 << " ";
	std::cout << std::endl;

	it2 = _sortedDeque.begin();

	std::cout << "After:  ";
	for (it2 = _sortedDeque.begin(); it2 != _sortedDeque.end(); it2++)
		std::cout << *it2 << " ";
	std::cout << std::endl;
}

void	PmergeMe::printTime()
{
	std::cout << "Time to process a range of " <<  _sortedList.size()
		<< " elements with std::list : "
		<< (double)( (double)_listTime / CLOCKS_PER_SEC ) * 1000
		<< " miliseconds " << std::endl;
	
	std::cout << "Time to process a range of " <<  _sortedDeque.size()
		<< " elements with std::deque : "
		<< (double)( (double)_dequeTime / CLOCKS_PER_SEC ) * 1000
		<< " miliseconds " << std::endl;
}

const char*	PmergeMe::invalidArgumentFoundException::what() const throw()
{
	return ("Exception: negative number found\n");
}