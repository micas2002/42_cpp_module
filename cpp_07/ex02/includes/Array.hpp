/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:06:04 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/02 20:56:19 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
	private:
		T*				_array;
		unsigned int	_n;

	public:
		Array() : _array(new T())
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		};

		Array(unsigned int n) : _array(new T[n]), _n(n)
		{
			std::cout << "\e[0;33mConstructor called of Array\e[0m" << std::endl;
		};

		Array(const Array &copy)
		{
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
			for (int i = 0; i < _n; i++)
				_array[i] = copy._array[i];
		};

		~Array()
		{
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
			delete [] _array;
		};

		Array & operator = (const Array &assign)
		{
			std::cout << "\e[0;33mAssignation Operator called of Array\e[0m" << std::endl;
			if (this != &assign)
			{
				if (_array)
					delete [] _array;
				_n = assign._n;
				_array = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					_array[i] = assign._array[i];
			}
			return (*this);
		};

		T & operator [] (unsigned int index) const
		{
			if (index > _n - 1)
				throw Array::IndexOutOfBoundsException();
			else
				return(_array[index]);
		}

		unsigned int	size(void)
		{
			return (_n);
		};

		class IndexOutOfBoundsException : public std::exception
		{
			public: virtual const char* what() const throw()
			{
				return ("Index Exception: index out of bounds\n");
			};
		};
};