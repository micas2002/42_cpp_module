/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:36:55 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/20 17:18:16 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::string			_expression;
		std::stack<int>		_stack;
		
	public:
		RPN(std::string input);
		RPN(const RPN &copy);
		~RPN();

		RPN & operator = (const RPN &assign);
		
		void	parse();
		void	calculate(char op);
		int		isOperator(char c);
		
		void	plusOperation();
		void	minusOperaton();
		void	divisionOperation();
		void	multiplyOperation();

		class UnkownCharacterException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif