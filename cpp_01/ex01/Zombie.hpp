/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:11:55 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/02 19:07:09 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	annouce(void);
		void	give_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif