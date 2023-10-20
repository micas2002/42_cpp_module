/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:38:18 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/20 18:35:04 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string input) : _expression(input)
{
	std::cout << "\e[0;33mDefault Constructor called of RPN\e[0m" << std::endl;
}

RPN::RPN(const RPN &copy) : _expression(copy._expression), _stack(copy._stack)
{
	std::cout << "\e[0;33mCopy Constructor called of RPN\e[0m" << std::endl;
	*this = copy;
}

RPN::~RPN()
{
	std::cout << "\e[0;31mDestructor called of RPN\e[0m" << std::endl;
}

RPN & RPN::operator=(const RPN &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of RPN\e[0m" << std::endl;
	if ( this != &assign ) {
		_expression = assign._expression;
		_stack = assign._stack;
	}
	return (*this);
}

void	RPN::parse()
{
	for (int i = 0; _expression[i]; i++)
	{
		if (isspace(_expression[i]))
			continue;
		else if (isdigit(_expression[i]))
			_stack.push(_expression[i] - '0');
		else if (isOperator(_expression[i]))
			calculate(_expression[i]);
		else
			throw UnkownCharacterException();
	}
	std::cout << _stack.top() << std::endl;
}

int	RPN::isOperator(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (1);
	return (0);
}


void	RPN::calculate(char op)
{
	int	x;
	int	y;
	
	x = _stack.top();
	_stack.pop();
	y = _stack.top();
	_stack.pop();

	switch (op)
	{
		case '+':
			_stack.push(y + x);
			break;
		case '-':
			_stack.push(y - x);
			break;
		case '/':
			_stack.push(y / x);
			break;
		case '*':
			_stack.push(y * x);
			break;
	}
}

const char* RPN::UnkownCharacterException::what() const throw()
{
	return ("Error\n");
}
