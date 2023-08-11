/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:34:05 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 16:01:46 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain & operator = (const Brain &assign);
};

#endif