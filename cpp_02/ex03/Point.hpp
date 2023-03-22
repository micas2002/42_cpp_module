/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:46:30 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/20 16:59:15 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
# define Point_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();
		Point & operator = (const Point &assign);
		Fixed	getX() const;
		Fixed	getY() const;
		
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif