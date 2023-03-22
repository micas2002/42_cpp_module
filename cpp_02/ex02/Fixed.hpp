/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:15:25 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/20 16:08:43 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	fractBits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed & operator = (const Fixed &assign);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		//comparison
		int operator > (const Fixed &n) const;
		int operator < (const Fixed &n) const;
		int operator >= (const Fixed &n) const;
		int operator <= (const Fixed &n) const;
		int operator == (const Fixed &n) const;
		int operator != (const Fixed &n) const;
		
		//arithmetic
		Fixed operator + (const Fixed &n) const;
		Fixed operator - (const Fixed &n) const;
		Fixed operator * (const Fixed &n) const;
		Fixed operator / (const Fixed &n) const;
		
		//increment/decrement
		//pre
		Fixed	operator ++ (void);
		Fixed	operator -- (void);
		//post
		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		
		//max/min
		static			Fixed & min(Fixed &n1, Fixed &n2);
		static const	Fixed & min(const Fixed &n1, const Fixed &n2);
		static 			Fixed & max(Fixed &n1, Fixed &n2);
		static const	Fixed & max(const Fixed &n1, const Fixed &n2);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);
#endif