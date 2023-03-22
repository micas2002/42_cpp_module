/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:33:42 by mibernar          #+#    #+#             */
/*   Updated: 2023/02/09 16:26:59 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign)
{
	return (*this);
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	int		i = 0;
	std::string	formsTypes[3] = {"robotomy request", "presidential pardon"
		, "shrubbery creation"};
	AForm*	form;

	while (i < 3)
	{
		if (formsTypes[i] == formName)
		{
			switch (i)
			{
				case 0:
					form = new RobotomyRequestForm(target);
					break ;
				case 1:
					form = new PresidentialPardonForm(target);
					break ;
				case 2:
					form = new ShrubberyCreationForm(target);
					break ;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (form);
		}
		i++;
	}
	std::cout << "given form name not found!\n";
	return(NULL);
}