/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:46:07 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 16:24:22 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
	
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap & operator = (const FragTrap &assign);

		void	highFivesGuys(void);
};

#endif