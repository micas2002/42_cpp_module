/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:33:50 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 16:24:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &assign);

		void    attack(std::string const& target);
		void	guardGate();
};

#endif