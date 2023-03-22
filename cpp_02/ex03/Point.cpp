/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:47:47 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/20 17:00:18 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	//std::cout << "\e[0;33mDefault Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	//std::cout << "\e[0;33mFloating-Point Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
	//std::cout << "\e[0;33mCopy Constructor called of Point\e[0m" << std::endl;
}

Point::~Point()
{
	//std::cout << "\e[0;31mDestructor called of Point\e[0m" << std::endl;
}

Point & Point::operator=(const Point &assign)
{
	//std::cout << "\e[0;33mCopy assignment operator called\n\e[0m";
	if (this != &assign)
	{
		(Fixed)this->x = assign.getX();
		(Fixed)this->y = assign.getY();
	}
	return (*this);
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}