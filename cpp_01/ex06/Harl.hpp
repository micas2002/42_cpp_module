/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:40:02 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/12 15:08:30 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl
{
	private:
		std::string	complainings;
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		invalidComplain(void);
	public:
		Harl(int argc, char **argv);
		~Harl();
		void	complain(void);
};


#endif