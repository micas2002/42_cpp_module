/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:40:21 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 12:31:26 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	getAbsolute(Fixed n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

Fixed side(const Point point, const Point p1, const Point p2)
{
	return (((point.getX() * (p1.getY() - p2.getY()))
		+ (p1.getX() * (p2.getY() - point.getY()))
		+ (p2.getX() * (point.getY() - p1.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	a1 = getAbsolute(side(point, a, b));
	Fixed	a2 = getAbsolute(side(point, a, c));
	Fixed	a3 = getAbsolute(side(point, b, c));
	Fixed	triangleArea = getAbsolute(side(a, b, c));
	
	if (a1 == 0 || a2 == 0 || a3 == 0)
		return (false);
	if (triangleArea == (a1 + a2 + a3))
		return (true);
	return (false);
}