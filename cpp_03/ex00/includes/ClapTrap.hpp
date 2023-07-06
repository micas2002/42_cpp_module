/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:17:15 by mibernar          #+#    #+#             */
/*   Updated: 2023/07/06 15:54:15 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string				name;
		int						hitPoints;
		int						energyPoints;
		int						attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap &assign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif