/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:34:05 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/30 18:25:35 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
	
	public:
		std::string	ideas[100];
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain & operator = (const Brain &assign);
};

#endif