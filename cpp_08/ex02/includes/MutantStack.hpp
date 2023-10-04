/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:09:55 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/04 16:41:13 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T> 
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack()
		{
			std::cout << "\e[0;33mDefault Constructor called of MutantStack\e[0m" << std::endl;
		};

		MutantStack(const MutantStack &copy)
		{
			std::cout << "\e[0;33mCopy Constructor called of MutantStack\e[0m" << std::endl;
		};

		~MutantStack()
		{
			std::cout << "\e[0;31mDestructor called of MutantStack\e[0m" << std::endl;
		};

		MutantStack & operator = (const MutantStack &assign)
		{
			std::cout << "\e[0;33mAssignation Operator called of MutantStack\e[0m" << std::endl;
			return (*this);
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

#endif