/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:20:43 by mibernar          #+#    #+#             */
/*   Updated: 2022/12/22 12:10:13 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	dark_secret;
	public:
		Contact(void);
		~Contact(void);
		std::string		get_info(std::string message);
		void			add_contact_info(void);
		void			print_info(int index);
		void			print_complete_info(void);
		std::string		trim_info(std::string str);
};

#endif