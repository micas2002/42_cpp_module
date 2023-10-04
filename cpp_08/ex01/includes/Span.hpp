/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:41:14 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/04 14:02:34 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <ctime>
#include <cstdlib>

class Span
{
	private:
		unsigned int	_maxSize;
		std::list<int>	_list;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		Span & operator = (const Span &assign);
		
		void	addNumber(int newNumber);
		int		longestSpan();
		int		shortestSpan();
		
		void	fillList(unsigned int range);

		class insufficientNumbersException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		
		class listIsFull : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif