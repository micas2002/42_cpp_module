/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:44 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/25 13:56:26 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <cstdlib>

class PmergeMe
{
	private:
		std::list<int>					_unsortedList;
		std::list<std::pair<int, int> >	_pairList;
		std::list<int>					_sortedList;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		
		PmergeMe & operator = (const PmergeMe &assign);

		void	addToList(char **argv);
		void	listSort();
		void	makePairsList();
		void	insertSortPairs();
		// void	dequeSort();
		
		void	printUnsorted();
		
		class negativeNUmberException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif