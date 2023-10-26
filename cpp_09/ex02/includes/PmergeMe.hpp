/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:44 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/26 12:25:21 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <ctime>

class PmergeMe
{
	private:
		clock_t							_listTime;

		std::list<int>					_unsortedList;
		std::list<std::pair<int, int> >	_pairList;
		std::list<int>					_sortedList;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		
		PmergeMe & operator = (const PmergeMe &assign);

		void	sort(char **argv);

		void	listSort(char **argv);
		void	addToList(char **argv);
		void	makePairsList();
		void	insertSortPairsList();

		
		// void	dequeSort();
		// void	addToDeque(char **argv);
		// void	makePairsDeque();
		// void	insertSortPairs();
		
		void	printList();
		void	printTime();
		
		class negativeNUmberException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif