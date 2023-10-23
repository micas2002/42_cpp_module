/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:44 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/23 15:49:45 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <list>
#include <cstdlib>

class PmergeMe
{
	private:
		std::list<int>					_unsortedList;
		std::list<std::pair<int, int>>	_pairList;
		std::list<int>					_sortedList;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		
		PmergeMe & operator = (const PmergeMe &assign);
	
		void	addToList(char **argv);
		void	listSort();
		void	dequeSort();
		
		void	printUnsorted();
		
		class negativeNUmberException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif