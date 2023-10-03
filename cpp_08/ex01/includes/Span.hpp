/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:41:14 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/03 16:43:22 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
	private:
		unsigned int	_n;
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

};

#endif