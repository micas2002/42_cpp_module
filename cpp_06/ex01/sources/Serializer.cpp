/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:34:04 by mibernar          #+#    #+#             */
/*   Updated: 2023/09/28 19:25:33 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "\e[0;33mDefault Constructor called of Serializer\e[0m"
		<< std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Serializer\e[0m"
		<< std::endl;
	*this = copy;
}

Serializer::~Serializer()
{
	std::cout << "\e[0;31mDestructor called of Serializer\e[0m" << std::endl;
}

Serializer & Serializer::operator=(const Serializer &assign)
{
	std::cout << "\e[0;33mAssignation Operator called of Bureaucrat\e[0m"
		<< std::endl;
	if (this != &assign)
		(void)assign;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}