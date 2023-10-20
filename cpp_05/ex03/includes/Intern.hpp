/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:20:11 by mibernar          #+#    #+#             */
/*   Updated: 2023/10/09 14:54:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern & operator = (const Intern &assign);
		
		AForm*	makeForm(std::string formName, std::string target);
};

#endif