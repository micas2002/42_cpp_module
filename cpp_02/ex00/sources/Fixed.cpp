/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:15:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/17 15:14:36 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
	this->setRawBits(copy.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;33mCopy assignment operator called\n\e[0m";
	if (this != &assign)
		this->fixedPoint = assign.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}