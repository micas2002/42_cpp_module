/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:15:16 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 15:32:17 by mibernar         ###   ########.fr       */
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

//arithmetic
Fixed	Fixed::operator + (const Fixed &n) const
{
	return Fixed(this->toFloat() + n.toFloat());
}

Fixed	Fixed::operator - (const Fixed &n) const
{
	return Fixed(this->toFloat() - n.toFloat());
}

Fixed	Fixed::operator * (const Fixed &n) const
{
	return Fixed(this->toFloat() * n.toFloat());
}

Fixed	Fixed::operator / (const Fixed &n) const
{
	return Fixed(this->toFloat() / n.toFloat());
}

//comparison
int	Fixed::operator > (const Fixed &n) const
{
	if (this->toFloat() > n.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator < (const Fixed &n) const
{
	if (this->toFloat() < n.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator >= (const Fixed &n) const
{
	if (this->toFloat() >= n.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator <= (const Fixed &n) const
{
	if (this->toFloat() <= n.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator == (const Fixed &n) const
{
	if (this->toFloat() == n.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator != (const Fixed &n) const
{
	if (this->toFloat() != n.toFloat())
		return (1);
	return (0);	
}

//increment/decrement
Fixed	Fixed::operator ++ (void)
{
	++this->fixedPoint;
    return (*this);
}

Fixed	Fixed::operator -- (void)
{
	--this->fixedPoint;
    return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp(*this);

    tmp.fixedPoint = this->fixedPoint++;
    return (tmp);
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp(*this);

    tmp.fixedPoint = this->fixedPoint++;
    return (tmp);
}

//min/max
Fixed &Fixed::min( Fixed &n1, Fixed &n2)
{
	if ( n1.getRawBits() < n2.getRawBits() )
		return (n1);
	return (n2);
}

Fixed &Fixed::max( Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	return (n2);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}