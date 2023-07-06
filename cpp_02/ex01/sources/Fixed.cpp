/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:15:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 15:31:09 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "\e[0;33mInt Constructor called of Fixed\e[0m" << std::endl;
	this->fixedPoint = number << fractBits;
}

Fixed::Fixed(const float number)
{
	std::cout << "\e[0;33mFloat Constructor called of Fixed\e[0m" << std::endl;
	this->fixedPoint = roundf(number * (1 << fractBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
	*this = copy;
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
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

int	Fixed::toInt(void) const
{
	return (this->fixedPoint >> fractBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedPoint / (float)(1 << this->fractBits));
}

std::ostream & operator << (std::ostream &out, Fixed const &c)
{
    out << c.toFloat();
    return out;
}